/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00304aec
 * Function: _INIT_26
 * Signature: undefined _INIT_26(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_26(void)

{
  long lVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e8ab8);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e8ab8,&PTR_LOOP_007e8000);
  FUN_00666bb8(&DAT_007e8ac0,&DAT_00683aec,auStack_58);
  FUN_00666bb8(&DAT_007e8ac8,&DAT_006847e0,auStack_60);
  FUN_00666bb8(&DAT_007e8ad0,0x6847ea,auStack_68);
  FUN_00666bb8(&DAT_007e8ad8,0x6847f1,auStack_70);
  __cxa_atexit(FUN_00304940,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


