/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006280d8
 * Function: FUN_006280d8
 * Signature: undefined FUN_006280d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006280d8(long *param_1,int param_2)

{
                    /* try { // try from 006280dc to 007280df has its CatchHandler @ 006285d8 */
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = (long)param_2;
  return;
}


