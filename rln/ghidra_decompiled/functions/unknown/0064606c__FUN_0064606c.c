/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064606c
 * Function: FUN_0064606c
 * Signature: undefined FUN_0064606c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064606c(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
                    /* try { // try from 006460c0 to 007460c7 has its CatchHandler @ 00646768 */
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[2] = (long)(PTR_DAT_007e6a48 + 0x10);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_0063db28(param_1 + 9);
  param_1[2] = (long)&PTR_FUN_007da7b0;
  *(uint *)(param_1 + 10) = param_3 | 8;
                    /* try { // try from 00646124 to 00746133 has its CatchHandler @ 0064679c */
  lVar1 = *(long *)(*param_1 + -0x18);
                    /* try { // try from 00646134 to 0074678b has its CatchHandler @ 0064604c */
  param_1[0xb] = (long)(PTR_DAT_007e5de8 + 0x18);
  FUN_006210e8((long)param_1 + lVar1,param_1 + 2);
  return;
}


