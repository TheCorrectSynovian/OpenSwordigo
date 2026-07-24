/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d2a4
 * Function: FUN_0064d2a4
 * Signature: undefined FUN_0064d2a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064d2a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7c80;
  if (*(char *)(param_1 + 0x29) != '\0') {
    if ((void *)param_1[2] != (void *)0x0) {
      operator_delete__((void *)param_1[2]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      operator_delete__((void *)param_1[5]);
    }
    if ((void *)param_1[7] != (void *)0x0) {
      operator_delete__((void *)param_1[7]);
    }
  }
                    /* try { // try from 0064d2f4 to 0074d2ff has its CatchHandler @ 0064d1a8 */
  FUN_0063b7bc(param_1);
  return;
}


