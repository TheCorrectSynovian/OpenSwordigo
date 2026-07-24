/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c784
 * Function: FUN_0062c784
 * Signature: undefined FUN_0062c784(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c784(long *param_1)

{
  (**(code **)(*param_1 + 0x60))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c808 with catch @ 0062c798
                       catch(type#1 @ 00000000) { ... } // from try @ 0062c834 with catch @ 0062c798
                        */
  return;
}


