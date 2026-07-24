/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066364c
 * Function: FUN_0066364c
 * Signature: undefined FUN_0066364c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066364c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
                    /* try { // try from 00663664 to 00763667 has its CatchHandler @ 00663738 */
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)&PTR_FUN_007db650;
                    /* try { // try from 00663684 to 00763687 has its CatchHandler @ 00663730 */
  FUN_00662f10(param_1 + 1);
  FUN_0061f468(param_1 + 0xe);
  param_1[1] = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 8);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
                    /* try { // try from 006636c8 to 007636cb has its CatchHandler @ 0066373c */
  return;
}


