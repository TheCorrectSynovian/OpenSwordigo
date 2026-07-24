/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f3900
 * Function: <EXTERNAL>::remove
 * Signature: int remove(char * __filename)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_remove_007dc4b0)((int)__filename);
  return iVar1;
}


