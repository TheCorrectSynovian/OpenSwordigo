/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f68e0
 * Function: <EXTERNAL>::wmemmove
 * Signature: wchar_t * wmemmove(wchar_t * __s1, wchar_t * __s2, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemmove(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemmove_007ddca0)();
  return pwVar1;
}


