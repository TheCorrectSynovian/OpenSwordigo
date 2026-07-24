/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062bbd8
 * Function: FUN_0062bbd8
 * Signature: undefined FUN_0062bbd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062bbd8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007da1f0;
  FUN_0063e890(param_1,0,0);
                    /* try { // try from 0062bc18 to 0072bc1f has its CatchHandler @ 0062bc34 */
  return;
}


