/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061fbc4
 * Function: FUN_0061fbc4
 * Signature: undefined FUN_0061fbc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061fbc4(long *param_1)

{
                    /* try { // try from 0061fbcc to 0071fbf3 has its CatchHandler @ 0061fe34 */
  *param_1 = (long)&PTR_FUN_007d9bb0;
  FUN_00670744(param_1 + 2);
  *param_1 = (long)(PTR_DAT_007e56c0 + 0x10);
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


