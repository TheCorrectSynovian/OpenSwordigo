/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ad74
 * Function: FUN_0062ad74
 * Signature: undefined FUN_0062ad74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062ad74(undefined8 *param_1)

{
                    /* try { // try from 0062ad74 to 0072ad9b has its CatchHandler @ 0062b1e4 */
  *param_1 = &PTR_FUN_007b7080;
  if (*(char *)((long)param_1 + 0x6f) != '\0') {
                    /* try { // try from 0062ad9c to 0072afdf has its CatchHandler @ 0062a9c8 */
    if ((void *)param_1[2] != (void *)0x0) {
      operator_delete__((void *)param_1[2]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      operator_delete__((void *)param_1[5]);
    }
    if ((void *)param_1[7] != (void *)0x0) {
      operator_delete__((void *)param_1[7]);
    }
    if ((void *)param_1[9] != (void *)0x0) {
      operator_delete__((void *)param_1[9]);
    }
  }
  FUN_0063b7bc(param_1);
  return;
}


