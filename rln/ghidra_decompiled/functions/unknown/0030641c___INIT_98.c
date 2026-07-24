/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030641c
 * Function: _INIT_98
 * Signature: undefined _INIT_98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_98(void)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e8bd8);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e8bd8,&PTR_LOOP_007e8000);
  FUN_00666bb8(&DAT_007e8be0,"inactive",auStack_58);
  FUN_00666bb8(&DAT_007e8be8,&DAT_00689be8,auStack_60);
  FUN_00666bb8(&DAT_007e8bf0,"continuous",auStack_68);
  __cxa_atexit(FUN_003062c4,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


