/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f5f40
 * Function: <EXTERNAL>::fseek
 * Signature: int fseek(FILE * __stream, long __off, int __whence)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_007dd7d0)((int)__stream,__off,__whence);
  return iVar1;
}


