/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fc7a0
 * Function: <EXTERNAL>::isalnum
 * Signature: int isalnum(int param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalnum(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isalnum_007e0c00)(param_1);
  return iVar1;
}


