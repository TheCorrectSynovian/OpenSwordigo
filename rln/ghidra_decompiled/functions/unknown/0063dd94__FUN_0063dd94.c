/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063dd94
 * Function: FUN_0063dd94
 * Signature: undefined FUN_0063dd94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063dd94(long *param_1)

{
                    /* catch() { ... } // from try @ 0063dac4 with catch @ 0063dda8 */
  *param_1 = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 7);
  operator_delete(param_1);
  return;
}


