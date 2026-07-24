/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670a0c
 * Function: FUN_00670a0c
 * Signature: undefined FUN_00670a0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670a0c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 00670a18 to 00770a1f has its CatchHandler @ 00670a28 */
                    /* try { // try from 00670a20 to 00770a2b has its CatchHandler @ 0067070c */
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
                    /* catch() { ... } // from try @ 00670a18 with catch @ 00670a28 */
                    /* catch() { ... } // from try @ 00670d28 with catch @ 00670a2c */
  *param_1 = &PTR_FUN_007dbbd0;
  uVar1 = FUN_0063be10();
  param_1[2] = uVar1;
  return;
}


