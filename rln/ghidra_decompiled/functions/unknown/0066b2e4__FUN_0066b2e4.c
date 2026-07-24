/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b2e4
 * Function: FUN_0066b2e4
 * Signature: undefined FUN_0066b2e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b2e4(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  if (param_3 != 1) {
    wmemcpy(param_1,param_2,param_3);
    return;
  }
  *param_1 = *param_2;
  return;
}


