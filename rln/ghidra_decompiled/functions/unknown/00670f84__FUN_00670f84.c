/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670f84
 * Function: FUN_00670f84
 * Signature: undefined FUN_00670f84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670f84(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007e6a10 + 0x10);
                    /* try { // try from 00670fa4 to 0077104b has its CatchHandler @ 00670ec4 */
  FUN_0065f390();
  FUN_0061f468(param_1 + 0xd);
  *param_1 = (long)(PTR_DAT_007e6a48 + 0x10);
  FUN_0063c0c8(param_1 + 7);
  operator_delete(param_1);
  return;
}


