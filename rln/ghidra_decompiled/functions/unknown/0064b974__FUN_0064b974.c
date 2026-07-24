/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b974
 * Function: FUN_0064b974
 * Signature: undefined FUN_0064b974(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b974(long param_1,int param_2)

{
                    /* catch() { ... } // from try @ 0064b684 with catch @ 0064b974 */
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)param_2 * 4;
  return;
}


