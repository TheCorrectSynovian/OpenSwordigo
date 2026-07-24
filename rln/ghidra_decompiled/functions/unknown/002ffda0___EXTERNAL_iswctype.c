/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002ffda0
 * Function: <EXTERNAL>::iswctype
 * Signature: int iswctype(wint_t __wc, wctype_t __desc)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswctype(wint_t __wc,wctype_t __desc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswctype_007e2700)(__wc);
  return iVar1;
}


