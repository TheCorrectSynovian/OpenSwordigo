/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00302dd0
 * Function: <EXTERNAL>::wcslen
 * Signature: size_t wcslen(wchar_t * __s)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcslen(wchar_t *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcslen_007e3f18)();
  return sVar1;
}


