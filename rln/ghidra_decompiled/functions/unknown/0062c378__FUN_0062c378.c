/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c378
 * Function: FUN_0062c378
 * Signature: undefined FUN_0062c378(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c378(undefined8 *param_1,long param_2)

{
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  param_1[2] = 0;
                    /* try { // try from 0062c39c to 0072c3a7 has its CatchHandler @ 0062c700 */
  *param_1 = &PTR_FUN_007da130;
  FUN_0063efc4(param_1,0);
  return;
}


