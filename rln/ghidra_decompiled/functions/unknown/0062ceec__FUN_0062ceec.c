/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ceec
 * Function: FUN_0062ceec
 * Signature: undefined FUN_0062ceec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062ceec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
                    /* try { // try from 0062ceec to 0072cf3f has its CatchHandler @ 0062ceec
                       catch() { ... } // from try @ 0062ceec with catch @ 0062ceec
                       catch() { ... } // from try @ 0062cfd8 with catch @ 0062ceec
                       catch() { ... } // from try @ 0062d158 with catch @ 0062ceec */
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  *param_1 = &PTR_FUN_007da260;
  uVar1 = FUN_0063be10();
  param_1[2] = uVar1;
  return;
}


