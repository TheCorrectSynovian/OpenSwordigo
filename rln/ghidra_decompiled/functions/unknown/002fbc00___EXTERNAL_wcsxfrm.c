/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fbc00
 * Function: <EXTERNAL>::wcsxfrm
 * Signature: size_t wcsxfrm(wchar_t * __s1, wchar_t * __s2, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcsxfrm(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcsxfrm_007e0630)();
  return sVar1;
}


