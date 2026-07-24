/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002ff350
 * Function: <EXTERNAL>::strtold
 * Signature: double strtold(char * __nptr, char * * __endptr)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtold(char *__nptr,char **__endptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtold_007e21d8)();
  return dVar1;
}


