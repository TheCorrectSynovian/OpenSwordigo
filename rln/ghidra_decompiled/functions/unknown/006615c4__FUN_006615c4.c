/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006615c4
 * Function: FUN_006615c4
 * Signature: undefined FUN_006615c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006615c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x21;
  FUN_00621e3c(puVar1);
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1e9) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *param_1 = &DAT_007db588;
  param_1[1] = 0;
  param_1[0x21] = &DAT_007db5b0;
  FUN_006210e8(puVar1,0);
  param_1[2] = &DAT_007db538;
  param_1[0x21] = &DAT_007db560;
  FUN_006210e8(puVar1,0);
                    /* try { // try from 00661658 to 0076165b has its CatchHandler @ 00661c4c */
  *param_1 = &PTR_FUN_007b7dd8;
  param_1[0x21] = &PTR_FUN_007b7e28;
  param_1[2] = &PTR_FUN_007b7e00;
  FUN_0065edec(param_1 + 3);
  FUN_006210e8(puVar1,param_1 + 3);
  return;
}


