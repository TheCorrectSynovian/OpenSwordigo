/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b31c
 * Function: FUN_0066b31c
 * Signature: undefined FUN_0066b31c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b31c(wchar_t *param_1,size_t param_2,wchar_t param_3)

{
                    /* catch() { ... } // from try @ 0066b310 with catch @ 0066b324 */
  if (param_2 != 1) {
                    /* catch() { ... } // from try @ 0066b35c with catch @ 0066b328 */
    wmemset(param_1,param_3,param_2);
    return;
  }
  *param_1 = param_3;
  return;
}


