/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f50d0
 * Function: <EXTERNAL>::wctype
 * Signature: wctype_t wctype(char * __property)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wctype_t wctype(char *__property)

{
  wctype_t wVar1;
  
  wVar1 = (*(code *)PTR_wctype_007dd098)();
  return wVar1;
}


