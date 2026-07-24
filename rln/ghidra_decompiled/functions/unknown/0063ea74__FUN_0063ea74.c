/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ea74
 * Function: FUN_0063ea74
 * Signature: undefined FUN_0063ea74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ea74(long *param_1)

{
                    /* try { // try from 0063ea80 to 0073ea83 has its CatchHandler @ 0063eba4 */
                    /* try { // try from 0063ea84 to 0073eb17 has its CatchHandler @ 0063e9a8 */
  *param_1 = (long)(PTR_DAT_007e76b8 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


