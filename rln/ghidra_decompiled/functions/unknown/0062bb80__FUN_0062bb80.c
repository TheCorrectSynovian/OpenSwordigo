/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062bb80
 * Function: FUN_0062bb80
 * Signature: undefined FUN_0062bb80(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062bb80(undefined8 *param_1,long param_2)

{
                    /* catch() { ... } // from try @ 0062bb70 with catch @ 0062bb80 */
                    /* catch() { ... } // from try @ 0062bc58 with catch @ 0062bb84 */
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007da1f0;
  param_1[2] = 0;
  FUN_0063e890(param_1,0,0);
  return;
}


