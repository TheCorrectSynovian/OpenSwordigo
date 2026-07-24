/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d1dc
 * Function: FUN_0064d1dc
 * Signature: undefined FUN_0064d1dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064d1dc(undefined8 *param_1)

{
                    /* try { // try from 0064d1dc to 0074d27b has its CatchHandler @ 0064d1a8 */
  *param_1 = &PTR_FUN_007b7c40;
  if (*(char *)(param_1 + 0x13) != '\0') {
    if ((void *)param_1[2] != (void *)0x0) {
      operator_delete__((void *)param_1[2]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      operator_delete__((void *)param_1[6]);
    }
    if ((void *)param_1[8] != (void *)0x0) {
      operator_delete__((void *)param_1[8]);
    }
    if ((void *)param_1[10] != (void *)0x0) {
      operator_delete__((void *)param_1[10]);
    }
  }
  FUN_0063b7bc(param_1);
  return;
}


