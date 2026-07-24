/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006490a8
 * Function: FUN_006490a8
 * Signature: undefined FUN_006490a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006490a8(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  puVar1 = param_1 + 0xb;
  FUN_00621e3c(puVar1);
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((long)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = &DAT_007daac8;
  param_1[0xb] = &DAT_007daaf0;
  FUN_006219c8(puVar1,0);
  *param_1 = &PTR_FUN_007b7448;
  param_1[0xb] = &PTR_FUN_007b7470;
  param_1[1] = PTR_DAT_007e6338 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0063db28(param_1 + 8);
  lVar2 = *param_2;
  param_1[1] = &PTR_FUN_007da9f0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_0066df24(param_1 + 10,lVar2,*(undefined8 *)(lVar2 + -0x18),auStack_8);
  *(uint *)(param_1 + 9) = param_3 | 0x10;
  uVar3 = 0;
  if ((param_3 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[10] + -0x18);
  }
  FUN_00647ea4(param_1 + 1,param_1[10],0,uVar3);
  FUN_006219c8(puVar1,param_1 + 1);
  return;
}


