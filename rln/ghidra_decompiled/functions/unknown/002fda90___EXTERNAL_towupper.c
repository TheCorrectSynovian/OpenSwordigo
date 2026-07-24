/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fda90
 * Function: <EXTERNAL>::towupper
 * Signature: wint_t towupper(wint_t __wc)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t towupper(wint_t __wc)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_towupper_007e1578)(__wc);
  return wVar1;
}


