/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b050
 * Function: FUN_0062b050
 * Signature: undefined FUN_0062b050(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062b050(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 0062ab94 with catch @ 0062b058 */
  *param_1 = &PTR_FUN_007b6e00;
  FUN_0063b7bc();
  operator_delete(param_1);
  return;
}


