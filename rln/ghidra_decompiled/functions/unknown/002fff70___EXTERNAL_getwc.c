/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fff70
 * Function: <EXTERNAL>::getwc
 * Signature: wint_t getwc(__FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t getwc(__FILE *__stream)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_getwc_007e27e8)((int)__stream);
  return wVar1;
}


