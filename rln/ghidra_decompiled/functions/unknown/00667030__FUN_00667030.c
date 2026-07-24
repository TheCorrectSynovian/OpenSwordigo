/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667030
 * Function: FUN_00667030
 * Signature: undefined FUN_00667030(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00667030(long *param_1,long *param_2)

{
                    /* try { // try from 00667040 to 0076704f has its CatchHandler @ 006680f8 */
  *param_1 = *param_2 + *(long *)(*param_2 + -0x18);
  return param_1;
}


