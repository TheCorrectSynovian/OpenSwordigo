/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f578
 * Function: FUN_0065f578
 * Signature: undefined FUN_0065f578(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065f578(long *param_1)

{
  *param_1 = (long)&PTR_FUN_007db410;
  FUN_0065f390();
  FUN_0061f468(param_1 + 0xd);
  *param_1 = (long)(PTR_DAT_007e6a48 + 0x10);
  FUN_0063c0c8(param_1 + 7);
  operator_delete(param_1);
  return;
}


