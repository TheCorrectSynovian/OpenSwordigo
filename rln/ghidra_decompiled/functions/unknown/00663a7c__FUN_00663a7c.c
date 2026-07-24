/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663a7c
 * Function: FUN_00663a7c
 * Signature: undefined FUN_00663a7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663a7c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  param_1[3] = (long)&PTR_FUN_007db650;
  FUN_00662f10(param_1 + 3);
  FUN_0061f468(param_1 + 0x10);
  param_1[3] = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 10);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar1 = param_2[4];
  param_1[2] = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18) + 0x10) = param_2[5];
  lVar1 = param_2[2];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  return;
}


