/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Util.Trace
import Lean.Parser.Extension
import Lean.KeyedDeclsAttribute
import Lean.Elab.Exception

namespace Lean

def Syntax.prettyPrint (stx : Syntax) : Format :=
match stx.unsetTrailing.reprint with -- TODO use syntax pretty printer
| some str => format str.toFormat
| none     => format stx

def MacroScopesView.format (view : MacroScopesView) (mainModule : Name) : Format :=
format $
  if view.scopes.isEmpty then view.name
  else if view.mainModule == mainModule then
   view.scopes.foldl mkNameNum (view.name ++ view.imported)
  else
   view.scopes.foldl mkNameNum (view.name ++ view.imported ++ view.mainModule)

namespace Elab

structure MacroStackElem :=
(before : Syntax) (after : Syntax)

abbrev MacroStack := List MacroStackElem

/- If `ref` does not have position information, then try to use macroStack -/
def getBetterRef (ref : Syntax) (macroStack : MacroStack) : Syntax :=
match ref.getPos with
| some _ => ref
| none   =>
  match macroStack.find? $ fun (elem : MacroStackElem) => elem.before.getPos != none with
  | some elem => elem.before
  | none      => ref

def addMacroStack (msgData : MessageData) (macroStack : MacroStack) : MessageData :=
match macroStack with
| []             => msgData
| stack@(top::_) =>
  let topFmt  := top.after.prettyPrint;
  let msgData := msgData ++ Format.line ++ "with resulting expansion" ++ MessageData.nest 2 (Format.line ++ topFmt);
  stack.foldl
    (fun (msgData : MessageData) (elem : MacroStackElem) =>
      let macroFmt := elem.before.prettyPrint;
      msgData ++ Format.line ++ "while expanding" ++ MessageData.nest 2 (Format.line ++ macroFmt))
    msgData

def checkSyntaxNodeKind (env : Environment) (k : Name) : ExceptT String Id Name :=
if Parser.isValidSyntaxNodeKind env k then pure k
else throw "failed"

def checkSyntaxNodeKindAtNamespaces (env : Environment) (k : Name) : List Name → ExceptT String Id Name
| []    => throw "failed"
| n::ns => checkSyntaxNodeKind env (n ++ k) <|> checkSyntaxNodeKindAtNamespaces ns

def syntaxNodeKindOfAttrParam (env : Environment) (defaultParserNamespace : Name) (arg : Syntax) : ExceptT String Id SyntaxNodeKind :=
match attrParamSyntaxToIdentifier arg with
| some k =>
  checkSyntaxNodeKind env k
  <|>
  checkSyntaxNodeKindAtNamespaces env k env.getNamespaces
  <|>
  checkSyntaxNodeKind env (defaultParserNamespace ++ k)
  <|>
  throw ("invalid syntax node kind '" ++ toString k ++ "'")
| none   => throw ("syntax node kind is missing")

private unsafe def evalSyntaxConstantUnsafe (env : Environment) (constName : Name) : ExceptT String Id Syntax :=
env.evalConstCheck Syntax `Lean.Syntax constName

@[implementedBy evalSyntaxConstantUnsafe]
constant evalSyntaxConstant (env : Environment) (constName : Name) : ExceptT String Id Syntax := throw ""

private constant evalConstant (γ : Type) (env : Environment) (typeName : Name) (constName : Name) : ExceptT String Id γ := throw ""

unsafe def mkElabAttribute (γ) (attrDeclName attrBuiltinName attrName : Name) (parserNamespace : Name) (typeName : Name) (kind : String)
    : IO (KeyedDeclsAttribute γ) :=
KeyedDeclsAttribute.init {
  builtinName := attrBuiltinName,
  name := attrName,
  descr := kind ++ " elaborator",
  valueTypeName := typeName,
  evalKey := fun _ env arg => syntaxNodeKindOfAttrParam env parserNamespace arg,
} attrDeclName

unsafe def mkMacroAttribute : IO (KeyedDeclsAttribute Macro) :=
mkElabAttribute Macro `Lean.Elab.macroAttribute `builtinMacro `macro Name.anonymous `Lean.Macro "macro"
@[init mkMacroAttribute] constant macroAttribute : KeyedDeclsAttribute Macro := arbitrary _

private def expandMacroFns (stx : Syntax) : List Macro → MacroM Syntax
| []    => throw Macro.Exception.unsupportedSyntax
| m::ms =>
  catch
    (m stx)
    (fun ex =>
      match ex with
      | Macro.Exception.unsupportedSyntax => expandMacroFns ms
      | ex                                => throw ex)

def getMacros (env : Environment) : Macro :=
fun stx =>
  let k := stx.getKind;
  let table := (macroAttribute.ext.getState env).table;
  match table.find? k with
  | some macroFns => expandMacroFns stx macroFns
  | none          => throw Macro.Exception.unsupportedSyntax

class MonadMacroAdapter (m : Type → Type) :=
(getCurrMacroScope                  : m MacroScope)
(getNextMacroScope                  : m MacroScope)
(setNextMacroScope                  : MacroScope → m Unit)

instance monadMacroAdapterTrans (m n) [MonadMacroAdapter m] [MonadLift m n] : MonadMacroAdapter n :=
{ getCurrMacroScope := liftM (MonadMacroAdapter.getCurrMacroScope : m _),
  getNextMacroScope := liftM (MonadMacroAdapter.getNextMacroScope : m _),
  setNextMacroScope := fun s => liftM (MonadMacroAdapter.setNextMacroScope s : m _) }

@[inline] def liftMacroM {α} {m : Type → Type} [Monad m] [MonadMacroAdapter m] [MonadEnv m] [MonadRecDepth m] [MonadError m] (x : MacroM α) : m α := do
scp  ← MonadMacroAdapter.getCurrMacroScope;
env  ← getEnv;
next ← MonadMacroAdapter.getNextMacroScope;
currRecDepth ← MonadRecDepth.getRecDepth;
maxRecDepth ← MonadRecDepth.getMaxRecDepth;
match x { currMacroScope := scp, mainModule := env.mainModule, currRecDepth := currRecDepth, maxRecDepth := maxRecDepth } next with
| EStateM.Result.error Macro.Exception.unsupportedSyntax _ => throwUnsupportedSyntax
| EStateM.Result.error (Macro.Exception.error ref msg) _   => throwErrorAt ref msg
| EStateM.Result.ok a nextMacroScope                       => do MonadMacroAdapter.setNextMacroScope nextMacroScope; pure a

@[inline] def adaptMacro {m : Type → Type} [Monad m] [MonadMacroAdapter m] [MonadEnv m] [MonadRecDepth m] [MonadError m] (x : Macro) (stx : Syntax) : m Syntax :=
liftMacroM (x stx)

partial def expandMacros (env : Environment) : Syntax → MacroM Syntax
| stx@(Syntax.node k args) => do
  stxNew? ← catch
    (do newStx ← getMacros env stx; pure (some newStx))
    (fun ex => match ex with
      | Macro.Exception.unsupportedSyntax => pure none
      | _                                 => throw ex);
  match stxNew? with
  | some stxNew => expandMacros stxNew
  | none        => do
    args ← Macro.withIncRecDepth stx $ args.mapM expandMacros;
    pure $ Syntax.node k args
| stx => pure stx

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Elab;
registerTraceClass `Elab.step

end Elab
end Lean
