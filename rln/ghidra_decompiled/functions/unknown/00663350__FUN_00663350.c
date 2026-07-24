/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663350
 * Function: FUN_00663350
 * Signature: undefined FUN_00663350(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663350(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 006630c8 with catch @ 00663350 */
                    /* try { // try from 00663358 to 0076335f has its CatchHandler @ 00663364 */
                    /* catch() { ... } // from try @ 00663358 with catch @ 00663364 */
                    /* catch() { ... } // from try @ 006630b4 with catch @ 00663368 */
                    /* catch() { ... } // from try @ 006630ac with catch @ 00663370 */
  *param_1 = &PTR_FUN_007b7e78;
                    /* try { // try from 00663378 to 0076337f has its CatchHandler @ 00663384 */
  param_1[2] = &PTR_FUN_007db650;
                    /* catch() { ... } // from try @ 00663378 with catch @ 00663384 */
  param_1[0x20] = &PTR_FUN_007b7ea0;
                    /* catch() { ... } // from try @ 00663048 with catch @ 00663388 */
  FUN_00662f10(param_1 + 2);
  FUN_0061f468(param_1 + 0xf);
                    /* catch() { ... } // from try @ 00662fe4 with catch @ 0066339c */
                    /* catch() { ... } // from try @ 00662fdc with catch @ 006633a4 */
  param_1[2] = PTR_DAT_007e6338 + 0x10;
                    /* try { // try from 006633ac to 007633af has its CatchHandler @ 00663730 */
  FUN_0063c0c8(param_1 + 9);
  param_1[0x20] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0x20);
  return;
}


