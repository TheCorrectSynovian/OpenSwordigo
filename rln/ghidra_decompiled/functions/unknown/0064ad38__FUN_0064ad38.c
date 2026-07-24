/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ad38
 * Function: FUN_0064ad38
 * Signature: undefined FUN_0064ad38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ad38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7710;
  FUN_0063c0c8(param_1 + 7);
                    /* catch() { ... } // from try @ 0064ab68 with catch @ 0064ad64 */
  operator_delete(param_1);
  return;
}


