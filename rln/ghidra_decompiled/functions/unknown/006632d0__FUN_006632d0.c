/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006632d0
 * Function: FUN_006632d0
 * Signature: undefined FUN_006632d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006632d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
                    /* catch() { ... } // from try @ 00663254 with catch @ 006632f0 */
                    /* catch() { ... } // from try @ 0066320c with catch @ 006632f8 */
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[2] = (long)&PTR_FUN_007db650;
                    /* catch() { ... } // from try @ 00663078 with catch @ 00663308 */
  FUN_00662f10(param_1 + 2);
                    /* catch() { ... } // from try @ 00663280 with catch @ 00663310 */
  FUN_0061f468(param_1 + 0xf);
                    /* catch() { ... } // from try @ 006631e8 with catch @ 00663320 */
  param_1[2] = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 9);
                    /* catch() { ... } // from try @ 006631dc with catch @ 00663330 */
  lVar1 = param_2[1];
  *param_1 = lVar1;
                    /* catch() { ... } // from try @ 00663178 with catch @ 00663338 */
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
                    /* catch() { ... } // from try @ 006630d0 with catch @ 00663348 */
  return;
}


