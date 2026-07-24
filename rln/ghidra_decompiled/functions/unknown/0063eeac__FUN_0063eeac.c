/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063eeac
 * Function: FUN_0063eeac
 * Signature: undefined FUN_0063eeac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063eeac(long *param_1)

{
                    /* try { // try from 0063eeb4 to 0073eec7 has its CatchHandler @ 0063f0ec */
                    /* try { // try from 0063eec8 to 0073eed7 has its CatchHandler @ 0063f0a0 */
  *param_1 = (long)(PTR_DAT_007e6228 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


