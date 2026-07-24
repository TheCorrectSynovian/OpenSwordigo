/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f46e0
 * Function: <EXTERNAL>::towlower
 * Signature: wint_t towlower(wint_t __wc)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t towlower(wint_t __wc)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_towlower_007dcba0)(__wc);
  return wVar1;
}


