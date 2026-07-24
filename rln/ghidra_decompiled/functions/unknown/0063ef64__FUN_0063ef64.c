/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ef64
 * Function: FUN_0063ef64
 * Signature: undefined FUN_0063ef64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ef64(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007e4d98 + 0x10);
                    /* try { // try from 0063ef88 to 0073ef93 has its CatchHandler @ 0063f028 */
  if ((long *)param_1[2] != (long *)0x0) {
                    /* try { // try from 0063ef94 to 0073f04b has its CatchHandler @ 0063ed40 */
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


