/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b3a8
 * Function: FUN_0066b3a8
 * Signature: undefined FUN_0066b3a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b3a8(wchar_t *param_1,wchar_t *param_2,long param_3)

{
  size_t __n;
  
  __n = param_3 - (long)param_2 >> 2;
  if (__n != 1) {
    wmemcpy(param_1,param_2,__n);
    return;
  }
  *param_1 = *param_2;
                    /* try { // try from 0066b3c8 to 0076b3cb has its CatchHandler @ 0066b464 */
  return;
}


