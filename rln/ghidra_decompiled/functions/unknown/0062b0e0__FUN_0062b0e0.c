/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b0e0
 * Function: FUN_0062b0e0
 * Signature: undefined FUN_0062b0e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062b0e0(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 0062ab78 with catch @ 0062b0ec */
  *param_1 = &PTR_FUN_007b6fe0;
  FUN_0063b7bc();
  operator_delete(param_1);
  return;
}


