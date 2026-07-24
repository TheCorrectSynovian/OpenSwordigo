/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fc680
 * Function: <EXTERNAL>::asin
 * Signature: double asin(double __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double asin(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_asin_007e0b70)();
  return dVar1;
}


