/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00648c68
 * Function: FUN_00648c68
 * Signature: undefined FUN_00648c68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00648c68(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1) = param_2[2];
  FUN_006219c8((long)param_1 + lVar1,0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)(PTR_DAT_007e6338 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0063db28(param_1 + 8);
  param_1[1] = (long)&PTR_FUN_007da9f0;
  *(uint *)(param_1 + 9) = param_3 | 0x10;
  lVar1 = *(long *)(*param_1 + -0x18);
  param_1[10] = (long)(PTR_DAT_007e6438 + 0x18);
  FUN_006219c8((long)param_1 + lVar1,param_1 + 1);
  return;
}


