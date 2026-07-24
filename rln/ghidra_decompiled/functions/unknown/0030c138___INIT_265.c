/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030c138
 * Function: _INIT_265
 * Signature: undefined _INIT_265(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_265(void)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e9d08);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e9d08,&PTR_LOOP_007e8000);
  DAT_007e9d18 = 1;
  DAT_007e9d20 = 0x330e;
  *(undefined4 *)PTR_FASTRANDOM_MAX_007e4b68 = 0x7fffffff;
  FUN_00666bb8(&DAT_007e9d10,&DAT_0068fbeb,auStack_30);
  __cxa_atexit(PTR_FUN_007e6cc8,&DAT_007e9d10,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


