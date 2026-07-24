/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622dd8
 * Function: FUN_00622dd8
 * Signature: undefined FUN_00622dd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b6c08;
  param_1[1] = 0;
  param_1[2] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 2);
  operator_delete(param_1);
  return;
}


