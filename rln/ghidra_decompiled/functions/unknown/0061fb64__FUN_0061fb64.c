/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061fb64
 * Function: FUN_0061fb64
 * Signature: undefined FUN_0061fb64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061fb64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007d9b50;
  FUN_00670744(param_1 + 2);
                    /* try { // try from 0061fb84 to 0071fbab has its CatchHandler @ 0061fe44 */
  if ((*(char *)(param_1 + 3) != '\0') && ((void *)param_1[6] != (void *)0x0)) {
    operator_delete__((void *)param_1[6]);
  }
  FUN_0063b7bc(param_1);
  operator_delete(param_1);
  return;
}


