/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00301670
 * Function: <EXTERNAL>::wctob
 * Signature: int wctob(wint_t __c)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wctob(wint_t __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wctob_007e3368)(__c);
  return iVar1;
}


