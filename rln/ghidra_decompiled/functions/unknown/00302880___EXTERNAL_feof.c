/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00302880
 * Function: <EXTERNAL>::feof
 * Signature: int feof(FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_007e3c70)((int)__stream);
  return iVar1;
}


