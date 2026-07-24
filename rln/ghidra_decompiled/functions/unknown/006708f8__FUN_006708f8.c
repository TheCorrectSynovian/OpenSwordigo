/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006708f8
 * Function: FUN_006708f8
 * Signature: undefined FUN_006708f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006708f8(long *param_1)

{
  *param_1 = (long)&PTR_FUN_007b8140;
  FUN_00670744(param_1 + 2);
  *param_1 = (long)(PTR_DAT_007e7c48 + 0x10);
  FUN_0063b7bc(param_1);
                    /* try { // try from 00670934 to 00770937 has its CatchHandler @ 006709d4 */
                    /* try { // try from 00670938 to 0077098f has its CatchHandler @ 0067070c */
  operator_delete(param_1);
  return;
}


