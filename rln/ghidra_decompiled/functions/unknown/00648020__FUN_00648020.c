/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00648020
 * Function: FUN_00648020
 * Signature: undefined FUN_00648020(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00648020(long *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  puVar1 = PTR_DAT_007e6338 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0063db28(param_1 + 7);
  lVar2 = *param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar3 = *(undefined8 *)(lVar2 + -0x18);
  *param_1 = (long)&PTR_FUN_007da9f0;
  FUN_0066df24(param_1 + 9,lVar2,uVar3,auStack_8);
  *(uint *)(param_1 + 8) = param_3;
  uVar3 = 0;
  if ((param_3 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[9] + -0x18);
  }
  FUN_00647ea4(param_1,param_1[9],0,uVar3);
  return;
}


