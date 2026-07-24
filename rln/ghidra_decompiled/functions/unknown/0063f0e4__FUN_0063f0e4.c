/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f0e4
 * Function: FUN_0063f0e4
 * Signature: undefined FUN_0063f0e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f0e4(long *param_1)

{
                    /* catch() { ... } // from try @ 0063eeb4 with catch @ 0063f0ec
                       catch() { ... } // from try @ 0063eef8 with catch @ 0063f0ec */
  *param_1 = (long)(PTR_DAT_007e4908 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  return;
}


