/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fef30
 * Function: <EXTERNAL>::setvbuf
 * Signature: int setvbuf(FILE * __stream, char * __buf, int __modes, size_t __n)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_007e1fc8)((int)__stream,__buf,__modes);
  return iVar1;
}


