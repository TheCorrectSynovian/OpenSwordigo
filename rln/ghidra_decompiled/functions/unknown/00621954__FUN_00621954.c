/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621954
 * Function: FUN_00621954
 * Signature: undefined FUN_00621954(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00621954(long param_1,undefined1 param_2)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x50))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8(0,param_2);
}


