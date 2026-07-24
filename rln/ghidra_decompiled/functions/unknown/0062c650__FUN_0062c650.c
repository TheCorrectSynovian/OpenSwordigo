/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c650
 * Function: FUN_0062c650
 * Signature: undefined FUN_0062c650(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c650(undefined8 *param_1,long param_2)

{
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
                    /* try { // try from 0062c65c to 0072c6d3 has its CatchHandler @ 0062c754 */
  *param_1 = &PTR_FUN_007b6d20;
  return;
}


