/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e724
 * Function: FUN_0064e724
 * Signature: undefined FUN_0064e724(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e724(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
                    /* try { // try from 0064e748 to 0074e753 has its CatchHandler @ 0064edc8 */
  *param_1 = &PTR_FUN_007db0e0;
                    /* try { // try from 0064e754 to 0074e75f has its CatchHandler @ 0064edb4 */
  FUN_0063f19c(param_1,0);
  return;
}


