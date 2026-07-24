/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006403cc
 * Function: FUN_006403cc
 * Signature: undefined FUN_006403cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006403cc(long *param_1,uint param_2)

{
                    /* catch() { ... } // from try @ 00640004 with catch @ 006403d0 */
                    /* catch() { ... } // from try @ 0063ffb4 with catch @ 006403d4 */
  *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) =
       *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & (param_2 ^ 0xffffffff);
  return;
}


