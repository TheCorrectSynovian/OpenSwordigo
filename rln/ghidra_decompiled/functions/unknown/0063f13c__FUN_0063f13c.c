/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f13c
 * Function: FUN_0063f13c
 * Signature: undefined FUN_0063f13c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f13c(long *param_1)

{
                    /* catch() { ... } // from try @ 0063f2b4 with catch @ 0063f15c
                       catch() { ... } // from try @ 0063f460 with catch @ 0063f15c */
  *param_1 = (long)(PTR_DAT_007e4908 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


