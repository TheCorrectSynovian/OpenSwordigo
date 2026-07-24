/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b384
 * Function: FUN_0066b384
 * Signature: undefined FUN_0066b384(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b384(wchar_t *param_1,wchar_t *param_2,long param_3)

{
  size_t __n;
  
  __n = param_3 - (long)param_2 >> 2;
  if (__n != 1) {
    wmemcpy(param_1,param_2,__n);
    return;
  }
  *param_1 = *param_2;
  return;
}


