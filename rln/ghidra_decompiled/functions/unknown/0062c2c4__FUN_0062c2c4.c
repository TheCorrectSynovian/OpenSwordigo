/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c2c4
 * Function: FUN_0062c2c4
 * Signature: undefined FUN_0062c2c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c2c4(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
                    /* try { // try from 0062c2f0 to 0072c367 has its CatchHandler @ 0062c2f0
                       catch() { ... } // from try @ 0062c2f0 with catch @ 0062c2f0
                       catch() { ... } // from try @ 0062c36c with catch @ 0062c2f0
                       catch() { ... } // from try @ 0062c53c with catch @ 0062c2f0
                       catch() { ... } // from try @ 0062c6d4 with catch @ 0062c2f0
                       catch() { ... } // from try @ 0062c74c with catch @ 0062c2f0 */
  return;
}


