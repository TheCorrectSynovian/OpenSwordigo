/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666074
 * Function: FUN_00666074
 * Signature: undefined FUN_00666074(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined ** FUN_00666074(void)

{
  int iVar1;
  
  if (((DAT_007fd2d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_007fd2d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_007fd2d0);
    __cxa_atexit(FUN_00665dfc,&PTR_PTR_007e8a30,&PTR_LOOP_007e8000);
    return &PTR_PTR_007e8a30;
  }
  return &PTR_PTR_007e8a30;
}


