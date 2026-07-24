/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ead4
 * Function: FUN_0063ead4
 * Signature: undefined FUN_0063ead4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ead4(long *param_1)

{
                    /* catch() { ... } // from try @ 0063ea54 with catch @ 0063eaf0 */
                    /* catch() { ... } // from try @ 0063ea34 with catch @ 0063eaf4 */
  *param_1 = (long)(PTR_DAT_007e55e8 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  return;
}


