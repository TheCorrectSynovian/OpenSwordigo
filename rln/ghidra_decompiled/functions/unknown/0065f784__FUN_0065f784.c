/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f784
 * Function: FUN_0065f784
 * Signature: undefined FUN_0065f784(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065f784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7d38;
  param_1[0x1f] = &PTR_FUN_007b7d60;
  param_1[1] = &PTR_FUN_007db410;
  FUN_0065f390(param_1 + 1);
  FUN_0061f468(param_1 + 0xe);
  param_1[1] = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(param_1 + 8);
  param_1[0x1f] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0x1f);
  operator_delete(param_1);
  return;
}


