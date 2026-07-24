/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ae3c
 * Function: FUN_0062ae3c
 * Signature: undefined FUN_0062ae3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062ae3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b70c0;
  if (*(char *)(param_1 + 0x11) != '\0') {
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
  FUN_0063b7bc(param_1);
  return;
}


