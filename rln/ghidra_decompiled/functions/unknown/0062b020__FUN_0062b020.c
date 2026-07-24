/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b020
 * Function: FUN_0062b020
 * Signature: undefined FUN_0062b020(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062b020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b6da0;
  FUN_0063b7bc();
                    /* catch() { ... } // from try @ 0062abe0 with catch @ 0062b048 */
  operator_delete(param_1);
  return;
}


