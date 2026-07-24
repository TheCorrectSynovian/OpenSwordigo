/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668bcc
 * Function: FUN_00668bcc
 * Signature: undefined FUN_00668bcc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00668bcc(long param_1)

{
                    /* try { // try from 00668bcc to 00768bd7 has its CatchHandler @ 00668a54 */
                    /* catch() { ... } // from try @ 00668bc4 with catch @ 00668bd4 */
  return 0 < *(int *)(param_1 + 0x10);
}


