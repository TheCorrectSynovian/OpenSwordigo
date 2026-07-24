/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f5cc
 * Function: FUN_0065f5cc
 * Signature: undefined FUN_0065f5cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065f5cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7cc8;
  param_1[2] = &PTR_FUN_007db410;
  param_1[0x20] = &PTR_FUN_007b7cf0;
  FUN_0065f390(param_1 + 2);
  FUN_0061f468(param_1 + 0xf);
  param_1[2] = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(param_1 + 9);
                    /* try { // try from 0065f63c to 0075f65b has its CatchHandler @ 0065f63c
                       catch() { ... } // from try @ 0065f63c with catch @ 0065f63c
                       catch() { ... } // from try @ 0065f664 with catch @ 0065f63c
                       catch() { ... } // from try @ 0065f6c4 with catch @ 0065f63c */
  param_1[0x20] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0x20);
  return;
}


