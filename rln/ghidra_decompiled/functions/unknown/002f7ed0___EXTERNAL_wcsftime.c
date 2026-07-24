/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f7ed0
 * Function: <EXTERNAL>::wcsftime
 * Signature: size_t wcsftime(wchar_t * __s, size_t __maxsize, wchar_t * __format, tm * __tp)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcsftime(wchar_t *__s,size_t __maxsize,wchar_t *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcsftime_007de798)();
  return sVar1;
}


