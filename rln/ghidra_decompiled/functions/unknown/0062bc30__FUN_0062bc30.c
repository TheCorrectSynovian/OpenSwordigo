/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062bc30
 * Function: FUN_0062bc30
 * Signature: undefined FUN_0062bc30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062bc30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* catch() { ... } // from try @ 0062bc18 with catch @ 0062bc34 */
                    /* catch() { ... } // from try @ 0062bbd4 with catch @ 0062bc3c */
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  param_1[2] = 0;
                    /* try { // try from 0062bc50 to 0072bc57 has its CatchHandler @ 0062bc68 */
  *param_1 = &PTR_FUN_007da1f0;
                    /* try { // try from 0062bc58 to 0072bc6b has its CatchHandler @ 0062bb84 */
  FUN_0063e890();
                    /* catch() { ... } // from try @ 0062bc50 with catch @ 0062bc68 */
  return;
}


