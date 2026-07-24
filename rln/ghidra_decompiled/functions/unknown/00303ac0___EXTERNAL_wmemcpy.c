/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00303ac0
 * Function: <EXTERNAL>::wmemcpy
 * Signature: wchar_t * wmemcpy(wchar_t * __s1, wchar_t * __s2, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemcpy(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemcpy_007e4590)();
  return pwVar1;
}


