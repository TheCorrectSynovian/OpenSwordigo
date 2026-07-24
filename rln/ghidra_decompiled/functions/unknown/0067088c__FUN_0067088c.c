/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067088c
 * Function: FUN_0067088c
 * Signature: undefined FUN_0067088c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067088c(long *param_1)

{
                    /* try { // try from 00670894 to 007708df has its CatchHandler @ 0067070c */
  *param_1 = (long)&PTR_FUN_007dbbd0;
  FUN_00670744(param_1 + 2);
  *param_1 = (long)(PTR_DAT_007e61b8 + 0x10);
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


