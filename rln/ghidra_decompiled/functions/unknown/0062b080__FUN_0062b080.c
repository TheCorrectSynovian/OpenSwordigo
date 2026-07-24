/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b080
 * Function: FUN_0062b080
 * Signature: undefined FUN_0062b080(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062b080(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 0062ab84 with catch @ 0062b090 */
  *param_1 = &PTR_FUN_007b6f80;
  FUN_0063b7bc();
  operator_delete(param_1);
  return;
}


