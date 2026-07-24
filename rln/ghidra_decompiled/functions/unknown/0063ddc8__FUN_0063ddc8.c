/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ddc8
 * Function: FUN_0063ddc8
 * Signature: undefined FUN_0063ddc8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ddc8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007e6a48 + 0x10);
  FUN_0063c0c8(param_1 + 7);
                    /* catch() { ... } // from try @ 0063d8d4 with catch @ 0063ddf8 */
  operator_delete(param_1);
  return;
}


