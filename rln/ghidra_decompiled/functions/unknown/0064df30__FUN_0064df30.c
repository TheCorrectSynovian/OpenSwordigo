/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064df30
 * Function: FUN_0064df30
 * Signature: undefined FUN_0064df30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064df30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
                    /* try { // try from 0064df50 to 0074df83 has its CatchHandler @ 0064df50
                       catch() { ... } // from try @ 0064df50 with catch @ 0064df50
                       catch() { ... } // from try @ 0064df88 with catch @ 0064df50 */
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007db1a0;
  FUN_0063ecf0(param_1,0,0);
  return;
}


