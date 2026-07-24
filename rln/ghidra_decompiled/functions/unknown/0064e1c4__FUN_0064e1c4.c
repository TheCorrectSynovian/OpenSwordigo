/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e1c4
 * Function: FUN_0064e1c4
 * Signature: undefined FUN_0064e1c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e1c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  param_1[2] = 0;
                    /* try { // try from 0064e1e8 to 0074e20f has its CatchHandler @ 0064e3d0 */
  *param_1 = &PTR_FUN_007db130;
  FUN_0063eb8c();
  return;
}


