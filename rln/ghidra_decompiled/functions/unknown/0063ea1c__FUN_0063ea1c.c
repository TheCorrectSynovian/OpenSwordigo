/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ea1c
 * Function: FUN_0063ea1c
 * Signature: undefined FUN_0063ea1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ea1c(long *param_1)

{
                    /* try { // try from 0063ea34 to 0073ea43 has its CatchHandler @ 0063eaf4 */
  *param_1 = (long)(PTR_DAT_007e76b8 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* try { // try from 0063ea54 to 0073ea5f has its CatchHandler @ 0063eaf0 */
  FUN_0063b7bc(param_1);
  return;
}


