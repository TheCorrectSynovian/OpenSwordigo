/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00646c04
 * Function: FUN_00646c04
 * Signature: undefined FUN_00646c04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00646c04(long *param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_8 [8];
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1) = param_2[2];
  FUN_006210e8((long)param_1 + lVar1,0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)(PTR_DAT_007e6a48 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0063db28(param_1 + 8);
  lVar1 = *param_3;
  param_1[1] = (long)&PTR_FUN_007da7b0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_00666a7c(param_1 + 10,lVar1,*(undefined8 *)(lVar1 + -0x18),auStack_8);
  *(uint *)(param_1 + 9) = param_4 | 0x10;
  uVar2 = 0;
  if ((param_4 & 3) != 0) {
    uVar2 = *(undefined8 *)(param_1[10] + -0x18);
  }
  FUN_00645b8c(param_1 + 1,param_1[10],0,uVar2);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 1);
  return;
}


