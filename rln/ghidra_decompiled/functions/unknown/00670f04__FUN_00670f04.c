/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670f04
 * Function: FUN_00670f04
 * Signature: undefined FUN_00670f04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670f04(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007e51f8 + 0x10);
  FUN_00662f10();
  FUN_0061f468(param_1 + 0xd);
                    /* try { // try from 00670f38 to 00770f3f has its CatchHandler @ 00671078 */
  *param_1 = (long)(PTR_DAT_007e6338 + 0x10);
                    /* try { // try from 00670f48 to 00770f5b has its CatchHandler @ 00671028 */
  FUN_0063c0c8(param_1 + 7);
  return;
}


