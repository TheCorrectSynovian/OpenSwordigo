/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c810
 * Function: FUN_0062c810
 * Signature: undefined FUN_0062c810(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c810(long *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c7d8 with catch @ 0062c818
                        */
                    /* try { // try from 0062c820 to 0072c833 has its CatchHandler @ 0062c83c */
  (**(code **)(*param_1 + 0x28))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062c804 with catch @ 0062c828
                        */
  return;
}


