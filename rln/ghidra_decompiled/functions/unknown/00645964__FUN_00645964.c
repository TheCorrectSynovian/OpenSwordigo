/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645964
 * Function: FUN_00645964
 * Signature: undefined FUN_00645964(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645964(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e6a48 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0063db28(param_1 + 7);
  *param_1 = (long)&PTR_FUN_007da7b0;
  *(undefined4 *)(param_1 + 8) = param_2;
  param_1[9] = (long)(PTR_DAT_007e5de8 + 0x18);
  return;
}


