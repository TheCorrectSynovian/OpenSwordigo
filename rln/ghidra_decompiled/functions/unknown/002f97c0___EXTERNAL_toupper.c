/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f97c0
 * Function: <EXTERNAL>::toupper
 * Signature: int toupper(int __c)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_toupper_007df410)(__c);
  return iVar1;
}


