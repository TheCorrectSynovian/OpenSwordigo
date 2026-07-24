/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f4a50
 * Function: <EXTERNAL>::strtod
 * Signature: double strtod(char * __nptr, char * * __endptr)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtod_007dcd58)();
  return dVar1;
}


