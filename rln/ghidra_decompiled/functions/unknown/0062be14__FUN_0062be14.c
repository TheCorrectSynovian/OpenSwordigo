/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062be14
 * Function: FUN_0062be14
 * Signature: undefined FUN_0062be14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062be14(undefined8 *param_1,undefined8 param_2,long param_3)

{
                    /* try { // try from 0062be20 to 0072be23 has its CatchHandler @ 0062c27c */
                    /* try { // try from 0062be24 to 0072beaf has its CatchHandler @ 0062bd88 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007da180;
  FUN_0063e704(param_1,0,0);
  return;
}


