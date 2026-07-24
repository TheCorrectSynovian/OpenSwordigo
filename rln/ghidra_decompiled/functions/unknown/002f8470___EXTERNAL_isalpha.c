/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f8470
 * Function: <EXTERNAL>::isalpha
 * Signature: int isalpha(int param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalpha(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isalpha_007dea68)(param_1);
  return iVar1;
}


