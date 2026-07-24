/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fb980
 * Function: <EXTERNAL>::mbrtowc
 * Signature: size_t mbrtowc(wchar_t * __pwc, char * __s, size_t __n, mbstate_t * __p)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbrtowc_007e04f0)();
  return sVar1;
}


