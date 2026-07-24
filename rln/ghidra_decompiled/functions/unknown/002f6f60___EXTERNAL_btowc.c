/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f6f60
 * Function: <EXTERNAL>::btowc
 * Signature: wint_t btowc(int __c)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t btowc(int __c)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_btowc_007ddfe0)(__c);
  return wVar1;
}


