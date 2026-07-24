/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00305698
 * Function: _INIT_50
 * Signature: undefined _INIT_50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_50(void)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e8b90);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e8b90,&PTR_LOOP_007e8000);
  FUN_00666bb8(&DAT_007e8b98,"enemy",auStack_38);
  FUN_00666bb8(&DAT_007e8ba0,"friendly",auStack_40);
  __cxa_atexit(FUN_0030559c,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


