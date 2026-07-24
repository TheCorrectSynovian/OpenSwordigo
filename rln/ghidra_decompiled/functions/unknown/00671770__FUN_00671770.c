/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671770
 * Function: FUN_00671770
 * Signature: undefined FUN_00671770(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671770(void *param_1)

{
  *(undefined **)((long)param_1 + 0x18) = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


