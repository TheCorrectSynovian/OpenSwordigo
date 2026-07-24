/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f9ec
 * Function: FUN_0061f9ec
 * Signature: undefined FUN_0061f9ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061f9ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007d9b50;
  FUN_00670744(param_1 + 2);
  if ((*(char *)(param_1 + 3) != '\0') && ((void *)param_1[6] != (void *)0x0)) {
    operator_delete__((void *)param_1[6]);
  }
                    /* catch() { ... } // from try @ 0061f91c with catch @ 0061fa28 */
  FUN_0063b7bc(param_1);
  return;
}


