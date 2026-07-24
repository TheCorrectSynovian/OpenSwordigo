/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003033e0
 * Function: <EXTERNAL>::wcrtomb
 * Signature: size_t wcrtomb(char * __s, wchar_t __wc, mbstate_t * __ps)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcrtomb(char *__s,wchar_t __wc,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcrtomb_007e4220)(__s,__wc);
  return sVar1;
}


