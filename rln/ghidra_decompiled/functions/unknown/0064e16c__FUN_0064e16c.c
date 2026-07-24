/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e16c
 * Function: FUN_0064e16c
 * Signature: undefined FUN_0064e16c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e16c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007db130;
  FUN_0063eb8c(param_1,0,0);
                    /* try { // try from 0064e1a4 to 0074e1cb has its CatchHandler @ 0064e384 */
  return;
}


