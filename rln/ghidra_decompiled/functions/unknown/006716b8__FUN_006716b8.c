/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006716b8
 * Function: FUN_006716b8
 * Signature: undefined FUN_006716b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006716b8(long param_1)

{
                    /* try { // try from 006716cc to 007716db has its CatchHandler @ 00671adc */
  *(undefined **)(param_1 + 0x18) = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0x18);
  return;
}


