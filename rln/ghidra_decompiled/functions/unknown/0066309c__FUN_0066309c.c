/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066309c
 * Function: FUN_0066309c
 * Signature: undefined FUN_0066309c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066309c(long *param_1)

{
                    /* try { // try from 006630ac to 007630af has its CatchHandler @ 00663370 */
                    /* try { // try from 006630b4 to 007630bb has its CatchHandler @ 00663368 */
  *param_1 = (long)&PTR_FUN_007db650;
  FUN_00662f10();
  FUN_0061f468(param_1 + 0xd);
                    /* try { // try from 006630c8 to 007630cb has its CatchHandler @ 00663350 */
                    /* try { // try from 006630d0 to 007630d7 has its CatchHandler @ 00663348 */
  *param_1 = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 7);
  operator_delete(param_1);
  return;
}


