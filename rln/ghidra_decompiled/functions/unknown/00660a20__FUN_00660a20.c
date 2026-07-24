/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660a20
 * Function: FUN_00660a20
 * Signature: undefined FUN_00660a20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660a20(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[2] = (long)&PTR_FUN_007db410;
  FUN_0065f390(param_1 + 2);
  FUN_0061f468(param_1 + 0xf);
  param_1[2] = (long)(PTR_DAT_007e6a48 + 0x10);
                    /* catch() { ... } // from try @ 006609e4 with catch @ 00660a78 */
  FUN_0063c0c8(param_1 + 9);
  lVar1 = param_2[1];
                    /* catch() { ... } // from try @ 00660928 with catch @ 00660a84 */
  *param_1 = lVar1;
                    /* catch() { ... } // from try @ 006609b8 with catch @ 00660a90 */
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  return;
}


