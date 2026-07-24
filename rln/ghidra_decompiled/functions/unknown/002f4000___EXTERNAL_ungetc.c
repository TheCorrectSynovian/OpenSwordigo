/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f4000
 * Function: <EXTERNAL>::ungetc
 * Signature: int ungetc(int __c, FILE * __stream)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ungetc_007dc830)(__c);
  return iVar1;
}


