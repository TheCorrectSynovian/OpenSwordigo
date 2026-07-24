/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ce48
 * Function: FUN_0062ce48
 * Signature: undefined FUN_0062ce48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062ce48(long *param_1)

{
                    /* try { // try from 0062ce54 to 0072ce5f has its CatchHandler @ 0062c900 */
  (**(code **)(*param_1 + 0x30))();
                    /* catch() { ... } // from try @ 0062cca0 with catch @ 0062ce5c */
  return;
}


