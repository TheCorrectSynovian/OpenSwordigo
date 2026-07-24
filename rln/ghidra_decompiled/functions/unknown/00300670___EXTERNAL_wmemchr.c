/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300670
 * Function: <EXTERNAL>::wmemchr
 * Signature: wchar_t * wmemchr(wchar_t * __s, wchar_t __c, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemchr(wchar_t *__s,wchar_t __c,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemchr_007e2b68)(__s,__c);
  return pwVar1;
}


