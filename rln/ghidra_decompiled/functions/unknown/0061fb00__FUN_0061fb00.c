/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061fb00
 * Function: FUN_0061fb00
 * Signature: undefined FUN_0061fb00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061fb00(long *param_1)

{
  *param_1 = (long)&PTR_FUN_007d9bb0;
  FUN_00670744(param_1 + 2);
                    /* catch() { ... } // from try @ 0061fd2c with catch @ 0061fb28
                       catch() { ... } // from try @ 00620028 with catch @ 0061fb28 */
  *param_1 = (long)(PTR_DAT_007e56c0 + 0x10);
  FUN_0063b7bc(param_1);
  return;
}


