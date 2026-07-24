/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00302520
 * Function: <EXTERNAL>::tolower
 * Signature: int tolower(int __c)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_007e3ac0)(__c);
  return iVar1;
}


