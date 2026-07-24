/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b33c
 * Function: FUN_0066b33c
 * Signature: undefined FUN_0066b33c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b33c(wchar_t *param_1,wchar_t *param_2,long param_3)

{
  size_t __n;
  
  __n = param_3 - (long)param_2 >> 2;
  if (__n != 1) {
    wmemcpy(param_1,param_2,__n);
    return;
  }
                    /* try { // try from 0066b358 to 0076b35b has its CatchHandler @ 0066b36c */
  *param_1 = *param_2;
                    /* try { // try from 0066b35c to 0076b36f has its CatchHandler @ 0066b328 */
  return;
}


