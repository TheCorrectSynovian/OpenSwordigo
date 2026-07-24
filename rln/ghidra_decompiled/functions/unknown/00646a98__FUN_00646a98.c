/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00646a98
 * Function: FUN_00646a98
 * Signature: undefined FUN_00646a98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00646a98(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1 + 0xb;
  FUN_00621e3c(puVar1);
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((long)param_1 + 0x139) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = &DAT_007da888;
  param_1[0xb] = &DAT_007da8b0;
  FUN_006210e8(puVar1,0);
  *param_1 = &PTR_FUN_007b7298;
  param_1[0xb] = &PTR_FUN_007b72c0;
  puVar2 = PTR_DAT_007e6a48;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = puVar2 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_0063db28(param_1 + 8);
  param_1[1] = &PTR_FUN_007da7b0;
  *(uint *)(param_1 + 9) = param_2 | 0x10;
  param_1[10] = PTR_DAT_007e5de8 + 0x18;
  FUN_006210e8(puVar1);
  return;
}


