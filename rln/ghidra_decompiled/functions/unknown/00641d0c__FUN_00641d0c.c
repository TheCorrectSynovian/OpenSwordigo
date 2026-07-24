/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00641d0c
 * Function: FUN_00641d0c
 * Signature: undefined FUN_00641d0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00641d0c(undefined8 *param_1,undefined8 param_2)

{
  FUN_00621e3c(param_1 + 1);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_007b71b8;
  param_1[1] = &PTR_FUN_007b71e0;
  FUN_006219c8(param_1 + 1,param_2);
  return;
}


