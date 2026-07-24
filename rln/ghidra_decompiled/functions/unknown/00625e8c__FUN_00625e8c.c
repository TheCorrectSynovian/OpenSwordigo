/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625e8c
 * Function: FUN_00625e8c
 * Signature: undefined FUN_00625e8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00625e8c(long *param_1,code *param_2)

{
                    /* try { // try from 00625e94 to 00725e9f has its CatchHandler @ 00625abc */
                    /* catch() { ... } // from try @ 00625dd4 with catch @ 00625e9c */
  (*param_2)((long)param_1 + *(long *)(*param_1 + -0x18));
  return param_1;
}


