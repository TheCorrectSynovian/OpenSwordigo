/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061fc30
 * Function: FUN_0061fc30
 * Signature: undefined FUN_0061fc30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061fc30(long *param_1)

{
  *param_1 = (long)&PTR_FUN_007d9bb0;
  FUN_00670744(param_1 + 2);
                    /* try { // try from 0061fc5c to 0071fc83 has its CatchHandler @ 0061fe14 */
  *param_1 = (long)(PTR_DAT_007e56c0 + 0x10);
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


