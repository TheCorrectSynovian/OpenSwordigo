/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300770
 * Function: <EXTERNAL>::strtof
 * Signature: float strtof(char * __nptr, char * * __endptr)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_007e2be8)();
  return fVar1;
}


