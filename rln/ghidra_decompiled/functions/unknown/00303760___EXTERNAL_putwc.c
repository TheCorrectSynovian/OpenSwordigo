/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00303760
 * Function: <EXTERNAL>::putwc
 * Signature: wint_t putwc(wchar_t __wc, __FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t putwc(wchar_t __wc,__FILE *__stream)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_putwc_007e43e0)(__wc);
  return wVar1;
}


