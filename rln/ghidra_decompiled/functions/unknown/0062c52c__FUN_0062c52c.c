/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c52c
 * Function: FUN_0062c52c
 * Signature: undefined FUN_0062c52c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c52c(undefined8 *param_1,long param_2)

{
                    /* try { // try from 0062c530 to 0072c53b has its CatchHandler @ 0062c6d8 */
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
                    /* try { // try from 0062c53c to 0072c65b has its CatchHandler @ 0062c2f0 */
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_007b70c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}


