/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f7d80
 * Function: <EXTERNAL>::getc
 * Signature: int getc(FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getc_007de6f0)((int)__stream);
  return iVar1;
}


