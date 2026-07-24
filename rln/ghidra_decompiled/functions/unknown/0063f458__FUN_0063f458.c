/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f458
 * Function: FUN_0063f458
 * Signature: undefined FUN_0063f458(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f458(long *param_1)

{
                    /* try { // try from 0063f460 to 0073f4e3 has its CatchHandler @ 0063f15c */
                    /* catch() { ... } // from try @ 0063f3e8 with catch @ 0063f464 */
                    /* catch() { ... } // from try @ 0063f18c with catch @ 0063f468 */
                    /* catch() { ... } // from try @ 0063f1ac with catch @ 0063f474
                       catch() { ... } // from try @ 0063f240 with catch @ 0063f474 */
  *param_1 = (long)(PTR_DAT_007e5640 + 0x10);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


