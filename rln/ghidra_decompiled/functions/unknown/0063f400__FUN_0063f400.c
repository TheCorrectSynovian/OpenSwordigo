/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f400
 * Function: FUN_0063f400
 * Signature: undefined FUN_0063f400(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f400(long *param_1)

{
                    /* catch() { ... } // from try @ 0063f2a8 with catch @ 0063f414 */
  *param_1 = (long)(PTR_DAT_007e5640 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  return;
}


