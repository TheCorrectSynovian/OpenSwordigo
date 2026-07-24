/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f5b20
 * Function: <EXTERNAL>::fputs
 * Signature: int fputs(char * __s, FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_007dd5c0)((int)__s);
  return iVar1;
}


