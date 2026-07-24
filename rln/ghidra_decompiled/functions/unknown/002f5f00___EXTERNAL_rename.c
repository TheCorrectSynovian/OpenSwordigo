/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f5f00
 * Function: <EXTERNAL>::rename
 * Signature: int rename(char * __old, char * __new)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_007dd7b0)((int)__old);
  return iVar1;
}


