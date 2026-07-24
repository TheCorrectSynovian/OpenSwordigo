/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062bd84
 * Function: FUN_0062bd84
 * Signature: undefined FUN_0062bd84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062bd84(long *param_1)

{
                    /* catch() { ... } // from try @ 0062bd74 with catch @ 0062bd84 */
                    /* try { // try from 0062bd88 to 0072bdbb has its CatchHandler @ 0062bd88
                       catch() { ... } // from try @ 0062bd88 with catch @ 0062bd88
                       catch() { ... } // from try @ 0062be24 with catch @ 0062bd88
                       catch() { ... } // from try @ 0062beb4 with catch @ 0062bd88
                       catch() { ... } // from try @ 0062bfb8 with catch @ 0062bd88
                       catch() { ... } // from try @ 0062c078 with catch @ 0062bd88
                       catch() { ... } // from try @ 0062c22c with catch @ 0062bd88
                       catch() { ... } // from try @ 0062c270 with catch @ 0062bd88 */
  (**(code **)(*param_1 + 0x48))();
  return;
}


