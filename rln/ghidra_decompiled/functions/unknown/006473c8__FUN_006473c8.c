/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006473c8
 * Function: FUN_006473c8
 * Signature: undefined FUN_006473c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006473c8(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
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
  puVar2 = PTR_DAT_007e6a48;
                    /* try { // try from 00647498 to 00747527 has its CatchHandler @ 00647498
                       catch() { ... } // from try @ 00647498 with catch @ 00647498
                       catch() { ... } // from try @ 006475f0 with catch @ 00647498 */
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = puVar2 + 0x10;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0063db28(param_1 + 10);
  param_1[3] = &PTR_FUN_007da7b0;
  *(undefined4 *)(param_1 + 0xb) = param_2;
  param_1[0xc] = PTR_DAT_007e5de8 + 0x18;
  FUN_006210e8(puVar1);
  return;
}


