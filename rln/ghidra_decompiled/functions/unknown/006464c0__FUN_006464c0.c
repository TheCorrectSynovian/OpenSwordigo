/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006464c0
 * Function: FUN_006464c0
 * Signature: undefined FUN_006464c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006464c0(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  puVar1 = param_1 + 0xc;
  FUN_00621e3c(puVar1);
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((long)param_1 + 0x141) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &DAT_007da838;
  param_1[1] = 0;
  param_1[0xc] = &DAT_007da860;
  FUN_006210e8(puVar1,0);
  *param_1 = &PTR_FUN_007b7228;
  param_1[0xc] = &PTR_FUN_007b7250;
  param_1[2] = PTR_DAT_007e6a48 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_0063db28(param_1 + 9);
  lVar2 = *param_2;
  param_1[2] = &PTR_FUN_007da7b0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_00666a7c(param_1 + 0xb,lVar2,*(undefined8 *)(lVar2 + -0x18),auStack_8);
  *(uint *)(param_1 + 10) = param_3 | 8;
  uVar3 = 0;
  if ((param_3 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[0xb] + -0x18);
  }
  FUN_00645b8c(param_1 + 2,param_1[0xb],0,uVar3);
  FUN_006210e8(puVar1,param_1 + 2);
  return;
}


