/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663bcc
 * Function: FUN_00663bcc
 * Signature: undefined FUN_00663bcc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663bcc(long *param_1)

{
                    /* try { // try from 00663bcc to 00763bfb has its CatchHandler @ 00663c70 */
                    /* catch() { ... } // from try @ 00663a1c with catch @ 00663bd8 */
  FUN_00663b38((long)param_1 + *(long *)(*param_1 + -0x18));
  return;
}


