/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640460
 * Function: FUN_00640460
 * Signature: undefined FUN_00640460(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00640460(long *param_1,int param_2)

{
                    /* catch() { ... } // from try @ 0063fe80 with catch @ 00640460 */
                    /* catch() { ... } // from try @ 0063fe30 with catch @ 00640464 */
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8) = (long)param_2;
  return;
}


