/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c82c
 * Function: FUN_0062c82c
 * Signature: undefined FUN_0062c82c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c82c(long *param_1)

{
                    /* try { // try from 0062c834 to 0072c83f has its CatchHandler @ 0062c798 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c820 with catch @ 0062c83c
                        */
  (**(code **)(*param_1 + 0x30))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c8ec with catch @ 0062c840
                        */
  return;
}


