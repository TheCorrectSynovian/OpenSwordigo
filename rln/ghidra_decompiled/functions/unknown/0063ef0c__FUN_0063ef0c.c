/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ef0c
 * Function: FUN_0063ef0c
 * Signature: undefined FUN_0063ef0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ef0c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007e4d98 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
                    /* try { // try from 0063ef38 to 0073ef3f has its CatchHandler @ 0063f078 */
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* try { // try from 0063ef40 to 0073ef87 has its CatchHandler @ 0063ed40 */
  FUN_0063b7bc(param_1);
  return;
}


