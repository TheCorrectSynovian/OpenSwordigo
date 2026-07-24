/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003005d0
 * Function: <EXTERNAL>::isspace
 * Signature: int isspace(int param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isspace(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isspace_007e2b18)(param_1);
  return iVar1;
}


