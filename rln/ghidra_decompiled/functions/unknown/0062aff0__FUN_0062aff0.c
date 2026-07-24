/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062aff0
 * Function: FUN_0062aff0
 * Signature: undefined FUN_0062aff0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062aff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b6d20;
                    /* catch() { ... } // from try @ 0062ac30 with catch @ 0062b00c */
  FUN_0063b7bc();
  operator_delete(param_1);
  return;
}


