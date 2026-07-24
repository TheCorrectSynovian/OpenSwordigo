/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006496d4
 * Function: FUN_006496d4
 * Signature: undefined FUN_006496d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006496d4(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1 + 0xd;
  FUN_00621e3c(puVar1);
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = &DAT_007dab68;
  param_1[1] = 0;
  param_1[0xd] = &DAT_007dab90;
  FUN_006219c8(puVar1,0);
  param_1[2] = &DAT_007dab18;
  param_1[0xd] = &DAT_007dab40;
  FUN_006219c8(puVar1,0);
  *param_1 = &PTR_FUN_007b74e8;
  param_1[0xd] = &PTR_FUN_007b7538;
  param_1[2] = &PTR_FUN_007b7510;
  puVar2 = PTR_DAT_007e6338;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = puVar2 + 0x10;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0063db28(param_1 + 10);
  param_1[3] = &PTR_FUN_007da9f0;
  *(undefined4 *)(param_1 + 0xb) = param_2;
  param_1[0xc] = PTR_DAT_007e6438 + 0x18;
  FUN_006219c8(puVar1);
  return;
}


