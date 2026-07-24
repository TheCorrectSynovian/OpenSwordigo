/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647234
 * Function: FUN_00647234
 * Signature: undefined FUN_00647234(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647234(long *param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_2[2];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar2 + -0x18),0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2 + 0x10) = param_2[5];
  FUN_006210e8((long)param_1 + lVar2 + 0x10,0);
  lVar2 = param_2[1];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  puVar1 = PTR_DAT_007e6a48;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = (long)(puVar1 + 0x10);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0063db28(param_1 + 10);
  *(undefined4 *)(param_1 + 0xb) = param_3;
  param_1[3] = (long)&PTR_FUN_007da7b0;
  lVar2 = *(long *)(*param_1 + -0x18);
  param_1[0xc] = (long)(PTR_DAT_007e5de8 + 0x18);
  FUN_006210e8((long)param_1 + lVar2,param_1 + 3);
  return;
}


