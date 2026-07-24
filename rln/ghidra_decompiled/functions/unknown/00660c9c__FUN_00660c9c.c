/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660c9c
 * Function: FUN_00660c9c
 * Signature: undefined FUN_00660c9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660c9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x1f;
  FUN_00621e3c(puVar1);
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1d9) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &DAT_007db4e8;
  param_1[0x1f] = &DAT_007db510;
  FUN_006210e8(puVar1,0);
  *param_1 = &PTR_FUN_007b7d38;
  param_1[0x1f] = &PTR_FUN_007b7d60;
  FUN_0065edec(param_1 + 1);
  FUN_006210e8(puVar1,param_1 + 1);
  return;
}


