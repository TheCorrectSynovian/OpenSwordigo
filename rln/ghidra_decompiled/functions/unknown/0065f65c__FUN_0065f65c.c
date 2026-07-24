/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f65c
 * Function: FUN_0065f65c
 * Signature: undefined FUN_0065f65c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065f65c(undefined8 *param_1)

{
                    /* try { // try from 0065f65c to 0075f663 has its CatchHandler @ 0065f6ac */
                    /* try { // try from 0065f664 to 0075f6b7 has its CatchHandler @ 0065f63c */
  *param_1 = &PTR_FUN_007b7cc8;
  param_1[2] = &PTR_FUN_007db410;
  param_1[0x20] = &PTR_FUN_007b7cf0;
  FUN_0065f390(param_1 + 2);
  FUN_0061f468(param_1 + 0xf);
                    /* catch() { ... } // from try @ 0065f65c with catch @ 0065f6ac */
  param_1[2] = PTR_DAT_007e6a48 + 0x10;
                    /* try { // try from 0065f6b8 to 0075f6bb has its CatchHandler @ 0065f6bc */
  FUN_0063c0c8(param_1 + 9);
                    /* catch() { ... } // from try @ 0065f6b8 with catch @ 0065f6bc */
                    /* try { // try from 0065f6c0 to 0075f6c3 has its CatchHandler @ 0065f6cc */
                    /* try { // try from 0065f6c4 to 0075f6cf has its CatchHandler @ 0065f63c */
                    /* catch() { ... } // from try @ 0065f6c0 with catch @ 0065f6cc */
  param_1[0x20] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0x20);
  operator_delete(param_1);
  return;
}


