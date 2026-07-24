/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062add8
 * Function: FUN_0062add8
 * Signature: undefined FUN_0062add8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062add8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b70a0;
  if (*(char *)((long)param_1 + 0x6f) != '\0') {
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


