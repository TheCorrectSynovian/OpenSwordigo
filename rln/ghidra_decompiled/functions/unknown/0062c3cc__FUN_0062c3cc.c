/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c3cc
 * Function: FUN_0062c3cc
 * Signature: undefined FUN_0062c3cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c3cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
                    /* try { // try from 0062c3e8 to 0072c40f has its CatchHandler @ 0062c688 */
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007da130;
  FUN_0063efc4(param_1,0);
  return;
}


