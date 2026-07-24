/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a9ac
 * Function: FUN_0062a9ac
 * Signature: undefined FUN_0062a9ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062a9ac(long *param_1,long param_2)

{
  param_1[1] = *(long *)(param_2 + 8);
                    /* catch() { ... } // from try @ 0062a9a0 with catch @ 0062a9b4 */
  *param_1 = param_2;
  **(long **)(param_2 + 8) = (long)param_1;
  *(long **)(param_2 + 8) = param_1;
  return;
}


