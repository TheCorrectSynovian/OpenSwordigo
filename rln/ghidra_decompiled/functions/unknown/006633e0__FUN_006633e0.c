/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006633e0
 * Function: FUN_006633e0
 * Signature: undefined FUN_006633e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006633e0(undefined8 *param_1)

{
                    /* try { // try from 006633e0 to 007633e3 has its CatchHandler @ 00663400 */
                    /* catch() { ... } // from try @ 006633e0 with catch @ 00663400 */
  *param_1 = &PTR_FUN_007b7e78;
  param_1[2] = &PTR_FUN_007db650;
  param_1[0x20] = &PTR_FUN_007b7ea0;
                    /* catch() { ... } // from try @ 006631bc with catch @ 0066341c */
  FUN_00662f10(param_1 + 2);
  FUN_0061f468(param_1 + 0xf);
                    /* try { // try from 00663428 to 00763517 has its CatchHandler @ 00663730 */
  param_1[2] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 9);
  param_1[0x20] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0x20);
  operator_delete(param_1);
  return;
}


