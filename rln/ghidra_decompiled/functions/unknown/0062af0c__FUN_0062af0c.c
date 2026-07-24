/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062af0c
 * Function: FUN_0062af0c
 * Signature: undefined FUN_0062af0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062af0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b6eb0;
  FUN_0063ea1c();
                    /* catch() { ... } // from try @ 0062aa6c with catch @ 0062af30 */
                    /* catch() { ... } // from try @ 0062aa50 with catch @ 0062af34 */
                    /* catch() { ... } // from try @ 0062aa34 with catch @ 0062af38 */
  operator_delete(param_1);
  return;
}


