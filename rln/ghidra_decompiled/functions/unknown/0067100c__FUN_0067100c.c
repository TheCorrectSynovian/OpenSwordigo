/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067100c
 * Function: FUN_0067100c
 * Signature: undefined FUN_0067100c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067100c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007e51f8 + 0x10);
                    /* catch() { ... } // from try @ 00670f48 with catch @ 00671028 */
  FUN_00662f10();
  FUN_0061f468(param_1 + 0xd);
  *param_1 = (long)(PTR_DAT_007e6338 + 0x10);
                    /* try { // try from 0067104c to 007710bf has its CatchHandler @ 006710c8 */
  FUN_0063c0c8(param_1 + 7);
  operator_delete(param_1);
  return;
}


