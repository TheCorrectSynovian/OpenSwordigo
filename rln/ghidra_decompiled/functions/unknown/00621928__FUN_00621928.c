/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621928
 * Function: FUN_00621928
 * Signature: undefined FUN_00621928(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00621928(long param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x60))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8(0,param_2,param_3);
}


