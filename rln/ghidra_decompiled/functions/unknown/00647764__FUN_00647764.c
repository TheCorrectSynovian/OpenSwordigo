/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647764
 * Function: FUN_00647764
 * Signature: undefined FUN_00647764(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647764(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  puVar1 = param_1 + 0xd;
  FUN_00621e3c(puVar1);
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x149) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = &DAT_007da928;
  param_1[1] = 0;
  param_1[0xd] = &DAT_007da950;
  FUN_006210e8(puVar1,0);
  param_1[2] = &DAT_007da8d8;
  param_1[0xd] = &DAT_007da900;
  FUN_006210e8(puVar1,0);
  *param_1 = &PTR_FUN_007b7338;
  param_1[0xd] = &PTR_FUN_007b7388;
  param_1[2] = &PTR_FUN_007b7360;
  param_1[3] = PTR_DAT_007e6a48 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0063db28(param_1 + 10);
  lVar2 = *param_2;
  param_1[3] = &PTR_FUN_007da7b0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_00666a7c(param_1 + 0xc,lVar2,*(undefined8 *)(lVar2 + -0x18),auStack_8);
  *(uint *)(param_1 + 0xb) = param_3;
  uVar3 = 0;
  if ((param_3 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[0xc] + -0x18);
  }
  FUN_00645b8c(param_1 + 3,param_1[0xc],0,uVar3);
  FUN_006210e8(puVar1,param_1 + 3);
  return;
}


