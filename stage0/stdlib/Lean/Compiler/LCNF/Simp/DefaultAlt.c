// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.DefaultAlt
// Imports: Init Lean.Compiler.LCNF.Simp.SimpM
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__3;
uint8_t lean_usize_dec_lt(size_t, size_t);
static lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___boxed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_alphaEqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__1;
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___boxed(lean_object*);
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__2;
static lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__1;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__3(lean_object*, size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_AltCore_getCode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___rarg___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadCoreM;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__5;
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__6;
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4;
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedPUnit;
lean_object* l_Lean_Compiler_LCNF_Simp_markSimplified___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__4;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Init.Util", 9);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("getElem!", 8);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("index out of bounds", 19);
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__1;
x_2 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(77u);
x_4 = lean_unsigned_to_nat(36u);
x_5 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_5);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_4, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_4, x_12);
lean_dec(x_4);
x_14 = lean_nat_dec_lt(x_5, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_16 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_15);
x_17 = l_Lean_Compiler_LCNF_AltCore_getCode(x_16);
lean_dec(x_16);
lean_inc(x_3);
x_18 = l_Lean_Compiler_LCNF_Code_alphaEqv(x_17, x_3);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_13;
x_5 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
x_23 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_13;
x_5 = x_23;
x_8 = x_22;
goto _start;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_array_fget(x_1, x_5);
x_26 = l_Lean_Compiler_LCNF_AltCore_getCode(x_25);
lean_dec(x_25);
lean_inc(x_3);
x_27 = l_Lean_Compiler_LCNF_Code_alphaEqv(x_26, x_3);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_13;
x_5 = x_29;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
x_32 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_13;
x_5 = x_32;
x_8 = x_31;
goto _start;
}
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_2, x_5);
if (x_4 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_7 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_8 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_7);
x_9 = l_Lean_Compiler_LCNF_AltCore_getCode(x_8);
lean_dec(x_8);
lean_inc(x_3);
x_10 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1(x_1, x_3, x_9, x_3, x_6, x_3, x_5, x_5);
lean_dec(x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_array_fget(x_1, x_2);
lean_dec(x_2);
x_12 = l_Lean_Compiler_LCNF_AltCore_getCode(x_11);
lean_dec(x_11);
lean_inc(x_3);
x_13 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1(x_1, x_3, x_12, x_3, x_6, x_3, x_5, x_5);
lean_dec(x_3);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_4);
x_16 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(x_1, x_4);
x_17 = lean_nat_dec_lt(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
x_18 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_15);
lean_dec(x_14);
x_20 = lean_nat_dec_lt(x_4, x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_22 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_21);
lean_ctor_set(x_7, 1, x_22);
lean_ctor_set(x_7, 0, x_16);
x_23 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_array_fget(x_1, x_4);
lean_ctor_set(x_7, 1, x_25);
lean_ctor_set(x_7, 0, x_16);
x_26 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_26;
goto _start;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_7, 0);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_7);
lean_inc(x_4);
x_30 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(x_1, x_4);
x_31 = lean_nat_dec_lt(x_28, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_29);
x_33 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_33;
x_7 = x_32;
goto _start;
}
else
{
uint8_t x_35; 
lean_dec(x_29);
lean_dec(x_28);
x_35 = lean_nat_dec_lt(x_4, x_2);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_37 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_39;
x_7 = x_38;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_array_fget(x_1, x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_30);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_43;
x_7 = x_42;
goto _start;
}
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_4);
x_16 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(x_1, x_4);
x_17 = lean_nat_dec_lt(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
x_18 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_15);
lean_dec(x_14);
x_20 = lean_nat_dec_lt(x_4, x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_22 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_21);
lean_ctor_set(x_7, 1, x_22);
lean_ctor_set(x_7, 0, x_16);
x_23 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_array_fget(x_1, x_4);
lean_ctor_set(x_7, 1, x_25);
lean_ctor_set(x_7, 0, x_16);
x_26 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_26;
goto _start;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_7, 0);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_7);
lean_inc(x_4);
x_30 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(x_1, x_4);
x_31 = lean_nat_dec_lt(x_28, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_29);
x_33 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_33;
x_7 = x_32;
goto _start;
}
else
{
uint8_t x_35; 
lean_dec(x_29);
lean_dec(x_28);
x_35 = lean_nat_dec_lt(x_4, x_2);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_37 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_39;
x_7 = x_38;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_array_fget(x_1, x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_30);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_12;
x_4 = x_43;
x_7 = x_42;
goto _start;
}
}
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
x_5 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4;
x_7 = l_panic___at___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp___spec__1(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
x_10 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__1(x_1, x_2, x_2, x_9, x_2, x_9, x_8);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_array_fget(x_1, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
x_17 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__2(x_1, x_2, x_2, x_16, x_2, x_16, x_15);
lean_dec(x_2);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Core_instMonadCoreM;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__1;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__2;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__3;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__4;
x_2 = l_instInhabitedPUnit;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__5;
x_2 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__6;
x_11 = lean_panic_fn(x_10, x_1);
x_12 = lean_apply_8(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Simp.DefaultAlt", 34);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Compiler.LCNF.Simp.addDefaultAlt", 37);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__1;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__2;
x_3 = lean_unsigned_to_nat(58u);
x_4 = lean_unsigned_to_nat(35u);
x_5 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_lt(x_4, x_3);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_24; 
x_16 = lean_array_uget(x_2, x_4);
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
x_27 = l_Lean_Compiler_LCNF_AltCore_getCode(x_16);
x_28 = l_Lean_Compiler_LCNF_AltCore_getCode(x_1);
x_29 = l_Lean_Compiler_LCNF_Code_alphaEqv(x_27, x_28);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_array_push(x_25, x_16);
lean_ctor_set(x_5, 0, x_31);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_5);
x_17 = x_32;
x_18 = x_13;
goto block_23;
}
else
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_free_object(x_5);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_16, 2);
lean_inc(x_34);
lean_dec(x_16);
x_35 = l_Lean_Compiler_LCNF_eraseParams(x_33, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_33);
x_36 = lean_unbox(x_26);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Compiler_LCNF_eraseCode(x_34, x_9, x_10, x_11, x_12, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_unbox(x_26);
lean_dec(x_26);
x_42 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(x_25, x_41, x_39, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_40);
lean_dec(x_39);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_17 = x_43;
x_18 = x_44;
goto block_23;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_34);
x_45 = lean_ctor_get(x_35, 1);
lean_inc(x_45);
lean_dec(x_35);
x_46 = lean_box(0);
x_47 = lean_unbox(x_26);
lean_dec(x_26);
x_48 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(x_25, x_47, x_46, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_45);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_17 = x_49;
x_18 = x_50;
goto block_23;
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_16);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_52 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1(x_51, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_5);
x_17 = x_54;
x_18 = x_53;
goto block_23;
}
else
{
uint8_t x_55; 
lean_free_object(x_5);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 0);
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_52);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_59 = lean_ctor_get(x_5, 0);
x_60 = lean_ctor_get(x_5, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_5);
x_61 = l_Lean_Compiler_LCNF_AltCore_getCode(x_16);
x_62 = l_Lean_Compiler_LCNF_AltCore_getCode(x_1);
x_63 = l_Lean_Compiler_LCNF_Code_alphaEqv(x_61, x_62);
x_64 = lean_unbox(x_63);
lean_dec(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_array_push(x_59, x_16);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_60);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_17 = x_67;
x_18 = x_13;
goto block_23;
}
else
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_16, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_16, 2);
lean_inc(x_69);
lean_dec(x_16);
x_70 = l_Lean_Compiler_LCNF_eraseParams(x_68, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_68);
x_71 = lean_unbox(x_60);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Compiler_LCNF_eraseCode(x_69, x_9, x_10, x_11, x_12, x_72);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_unbox(x_60);
lean_dec(x_60);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(x_59, x_76, x_74, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_75);
lean_dec(x_74);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_17 = x_78;
x_18 = x_79;
goto block_23;
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_69);
x_80 = lean_ctor_get(x_70, 1);
lean_inc(x_80);
lean_dec(x_70);
x_81 = lean_box(0);
x_82 = lean_unbox(x_60);
lean_dec(x_60);
x_83 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(x_59, x_82, x_81, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_80);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_17 = x_84;
x_18 = x_85;
goto block_23;
}
}
else
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_16);
x_86 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_87 = l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1(x_86, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_59);
lean_ctor_set(x_89, 1, x_60);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_17 = x_90;
x_18 = x_88;
goto block_23;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_91 = lean_ctor_get(x_87, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_87, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_93 = x_87;
} else {
 lean_dec_ref(x_87);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
}
}
block_23:
{
lean_object* x_19; size_t x_20; size_t x_21; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = lean_usize_add(x_4, x_20);
x_4 = x_21;
x_5 = x_19;
x_13 = x_18;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__3(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_array_uget(x_1, x_2);
if (lean_obj_tag(x_5) == 0)
{
size_t x_6; size_t x_7; 
lean_dec(x_5);
x_6 = 1;
x_7 = lean_usize_add(x_2, x_6);
x_2 = x_7;
goto _start;
}
else
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = 1;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_addDefaultAlt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_array_get_size(x_1);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_dec_le(x_42, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_nat_dec_lt(x_45, x_42);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_42);
x_47 = lean_box(0);
x_10 = x_47;
goto block_41;
}
else
{
uint8_t x_48; 
x_48 = lean_nat_dec_le(x_42, x_42);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_42);
x_49 = lean_box(0);
x_10 = x_49;
goto block_41;
}
else
{
size_t x_50; size_t x_51; uint8_t x_52; 
x_50 = 0;
x_51 = lean_usize_of_nat(x_42);
lean_dec(x_42);
x_52 = l_Array_anyMUnsafe_any___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__3(x_1, x_50, x_51);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_box(0);
x_10 = x_53;
goto block_41;
}
else
{
lean_object* x_54; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_1);
lean_ctor_set(x_54, 1, x_9);
return x_54;
}
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_42);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_1);
lean_ctor_set(x_55, 1, x_9);
return x_55;
}
block_41:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_10);
x_11 = l___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_16 = l_Lean_Compiler_LCNF_Simp_markSimplified___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_array_get_size(x_1);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__2;
x_22 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2(x_12, x_1, x_19, x_20, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
lean_dec(x_1);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_Compiler_LCNF_AltCore_getCode(x_12);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_array_push(x_25, x_27);
lean_ctor_set(x_22, 0, x_28);
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Compiler_LCNF_AltCore_getCode(x_12);
lean_dec(x_12);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_array_push(x_31, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_30);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_12);
x_36 = !lean_is_exclusive(x_22);
if (x_36 == 0)
{
return x_22;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_22, 0);
x_38 = lean_ctor_get(x_22, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_22);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_1);
lean_ctor_set(x_40, 1, x_9);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2(x_1, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__3(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__1 = _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__1);
l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__2 = _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__2);
l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__3 = _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__3);
l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4 = _init_l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Compiler_LCNF_Simp_DefaultAlt_0__Lean_Compiler_LCNF_Simp_getMaxOccs_getNumOccsOf___spec__1___closed__4);
l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__1 = _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__1();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__1);
l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__2 = _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__2();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__2);
l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__3 = _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__3();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__3);
l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__4 = _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__4();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__4);
l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__5 = _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__5();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__5);
l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__6 = _init_l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__6();
lean_mark_persistent(l_panic___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__1___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Compiler_LCNF_Simp_addDefaultAlt___spec__2___closed__4);
l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1 = _init_l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__1);
l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__2 = _init_l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__2();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_addDefaultAlt___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif