/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f6a30
 * Function: <EXTERNAL>::wmemset
 * Signature: wchar_t * wmemset(wchar_t * __s, wchar_t __c, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemset(wchar_t *__s,wchar_t __c,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemset_007ddd48)(__s,__c);
  return pwVar1;
}


