/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b4d8
 * Function: FUN_0066b4d8
 * Signature: undefined FUN_0066b4d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066b4d8(long *param_1,long *param_2)

{
  *param_1 = *param_2 + *(long *)(*param_2 + -0x18) * 4;
                    /* catch() { ... } // from try @ 0066b4d0 with catch @ 0066b4ec */
  return param_1;
}


