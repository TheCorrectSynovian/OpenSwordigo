/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c420
 * Function: FUN_0062c420
 * Signature: undefined FUN_0062c420(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c420(undefined8 *param_1,undefined8 param_2,long param_3)

{
                    /* try { // try from 0062c430 to 0072c457 has its CatchHandler @ 0062c700 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_007da130;
  FUN_0063efc4();
  return;
}


