/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647c7c
 * Function: FUN_00647c7c
 * Signature: undefined FUN_00647c7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647c7c(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e6338 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0063db28(param_1 + 7);
  *param_1 = (long)&PTR_FUN_007da9f0;
  *(undefined4 *)(param_1 + 8) = param_2;
  param_1[9] = (long)(PTR_DAT_007e6438 + 0x18);
  return;
}


