/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064a9f8
 * Function: FUN_0064a9f8
 * Signature: undefined FUN_0064a9f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064a9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7560;
  FUN_0066a528(param_1 + 1);
                    /* try { // try from 0064aa1c to 0074ab67 has its CatchHandler @ 0064aa1c
                       catch() { ... } // from try @ 0064aa1c with catch @ 0064aa1c
                       catch() { ... } // from try @ 0064ab70 with catch @ 0064aa1c
                       catch() { ... } // from try @ 0064acd0 with catch @ 0064aa1c
                       catch() { ... } // from try @ 0064ae00 with catch @ 0064aa1c */
  *param_1 = &PTR_FUN_007b7590;
  return;
}


