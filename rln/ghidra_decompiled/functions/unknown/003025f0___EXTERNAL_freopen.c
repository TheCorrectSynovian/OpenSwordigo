/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003025f0
 * Function: <EXTERNAL>::freopen
 * Signature: FILE * freopen(char * __filename, char * __modes, FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * freopen(char *__filename,char *__modes,FILE *__stream)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_freopen_007e3b28)();
  return pFVar1;
}


