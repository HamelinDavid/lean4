/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Tactic.Simp
import Lean.Elab.Tactic.Basic
import Lean.Elab.Tactic.ElabTerm
import Lean.Elab.Tactic.Location
import Lean.Meta.Tactic.Replace

namespace Lean.Elab.Tactic
open Meta


unsafe def evalSimpConfigUnsafe (e : Expr) : TermElabM Meta.Simp.Config :=
  Term.evalExpr Meta.Simp.Config ``Meta.Simp.Config e

@[implementedBy evalSimpConfigUnsafe] constant evalSimpConfig (e : Expr) : TermElabM Meta.Simp.Config

/- `optConfig` is of the form `("(" "config" ":=" term ")")?` -/
def elabSimpConfig (optConfig : Syntax) : TermElabM Meta.Simp.Config := do
  if optConfig.isNone then
    return {}
  else
    withLCtx {} {} <| withNewMCtxDepth <| Term.withSynthesize do
      let c ← Term.elabTermEnsuringType optConfig[3] (Lean.mkConst ``Meta.Simp.Config)
      evalSimpConfig (← instantiateMVars c)

/-- Elaborate extra simp lemmas provided to `simp`. `stx` is of the `simpLemma,*` -/
private def elabSimpLemmas (stx : Syntax) (ctx : Simp.Context) : TacticM Simp.Context := do
  if stx.isNone then
    return ctx
  else
    /-
    syntax simpPre := "↓"
    syntax simpPost := "↑"
    syntax simpLemma := (simpPre <|> simpPost)? term

    syntax simpErase := "-" ident
    -/
    withMainContext do
      let mut lemmas := ctx.simpLemmas
      for arg in stx[1].getSepArgs do
        if arg.getKind == ``Lean.Parser.Tactic.simpErase then
          let declName ← resolveGlobalConstNoOverload arg[1].getId
          lemmas ← lemmas.erase declName
        else
          let post :=
            if arg[0].isNone then
              true
            else
              arg[0][0].getKind == ``Parser.Tactic.simpPost
          match (← resolveSimpIdLemma? arg[1]) with
          | some e =>
            if e.isConst then
              let declName := e.constName!
              let info ← getConstInfo declName
              if (← isProp info.type) then
                lemmas ← lemmas.addConst declName post
              else
                lemmas := lemmas.addDeclToUnfold declName
            else
              lemmas ← lemmas.add e post
          | _ =>
            let arg ← elabTerm arg[1] none (mayPostpone := false)
            lemmas ← lemmas.add arg post
      return { ctx with simpLemmas := lemmas }
where
  resolveSimpIdLemma? (simpArgTerm : Syntax) : TacticM (Option Expr) := do
    if simpArgTerm.isIdent then
      try
        Term.resolveId? simpArgTerm
      catch _ =>
        return none
    else
      return none

/-
  "simp " ("(" "config" ":=" term ")")? ("only ")? ("[" simpLemma,* "]")? (location)?
-/
@[builtinTactic Lean.Parser.Tactic.simp] def evalSimp : Tactic := fun stx => do
  let simpOnly := !stx[2].isNone
  let ctx  ← elabSimpLemmas stx[3] {
    config      := (← elabSimpConfig stx[1])
    simpLemmas  := if simpOnly then {} else (← getSimpLemmas)
    congrLemmas := (← getCongrLemmas)
  }
  let loc := expandOptLocation stx[4]
  match loc with
  | Location.targets hUserNames simpTarget =>
    withMainContext do
      let fvarIds ← hUserNames.mapM fun hUserName => return (← getLocalDeclFromUserName hUserName).fvarId
      go ctx fvarIds simpTarget
  | Location.wildcard =>
    withMainContext do
      go ctx (← getNondepPropHyps (← getMainGoal)) true
where
  go (ctx : Simp.Context) (fvarIdsToSimp : Array FVarId) (simpType : Bool) : TacticM Unit := do
    let mut mvarId ← getMainGoal
    let mut toAssert : Array Hypothesis := #[]
    for fvarId in fvarIdsToSimp do
      let localDecl ← getLocalDecl fvarId
      let type ← instantiateMVars localDecl.type
      match (← simpStep mvarId (mkFVar fvarId) type ctx) with
      | none => replaceMainGoal []; return ()
      | some (value, type) => toAssert := toAssert.push { userName := localDecl.userName, type := type, value := value }
    if simpType then
      match (← simpTarget mvarId ctx) with
      | none => replaceMainGoal []; return ()
      | some mvarIdNew => mvarId := mvarIdNew
    let (_, mvarIdNew) ← assertHypotheses mvarId toAssert
    let mvarIdNew ← tryClearMany mvarIdNew fvarIdsToSimp
    replaceMainGoal [mvarIdNew]

end Lean.Elab.Tactic
