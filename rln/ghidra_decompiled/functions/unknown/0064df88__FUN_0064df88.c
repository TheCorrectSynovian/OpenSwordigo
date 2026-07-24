/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064df88
 * Function: FUN_0064df88
 * Signature: undefined FUN_0064df88(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064df88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* try { // try from 0064df88 to 0074e093 has its CatchHandler @ 0064df50 */
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_007db1a0;
  FUN_0063ecf0();
  return;
}


