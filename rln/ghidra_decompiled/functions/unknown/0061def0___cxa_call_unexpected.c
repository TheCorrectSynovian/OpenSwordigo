/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061def0
 * Function: __cxa_call_unexpected
 * Signature: noreturn undefined __cxa_call_unexpected(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_call_unexpected(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  _func_void *p_Var5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  __cxa_begin_catch();
  local_20 = *(undefined8 *)(param_1 + -0x10);
  uVar6 = *(undefined8 *)(param_1 + -0x18);
  iVar1 = *(int *)(param_1 + -0x24);
                    /* try { // try from 0061df20 to 0071df47 has its CatchHandler @ 0061e178 */
  p_Var5 = *(_func_void **)(param_1 + -0x38);
  __cxxabiv1::__unexpected(*(_func_void **)(param_1 + -0x40));
  __cxa_begin_catch();
  plVar3 = (long *)__cxa_get_globals_fast();
  puVar4 = (undefined8 *)*plVar3;
  puVar7 = puVar4 + 0xe;
  if ((puVar4[10] & 1) != 0) {
    puVar7 = (undefined8 *)*puVar4;
  }
                    /* try { // try from 0061df48 to 0071dfb7 has its CatchHandler @ 0061de54 */
  FUN_0061d768(0,uVar6,auStack_30);
  cVar2 = FUN_0061d874(auStack_30,puVar7[-0xe],puVar7,(long)iVar1);
  if (cVar2 != '\0') {
    uVar6 = __cxa_rethrow();
    __cxa_end_catch();
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_006818c4(uVar6);
  }
  cVar2 = FUN_0061d874(auStack_30,PTR_typeinfo_007e7ee0,0,(long)iVar1);
  if (cVar2 != '\0') {
    plVar3 = (long *)__cxa_allocate_exception(8);
                    /* try { // try from 0061dfb8 to 0071e053 has its CatchHandler @ 0061e210 */
    *plVar3 = (long)(PTR_vtable_007e6760 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar3,PTR_typeinfo_007e7ee0,PTR__bad_exception_007e7cc0);
  }
                    /* WARNING: Subroutine does not return */
  __cxxabiv1::__terminate(p_Var5);
}


