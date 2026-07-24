/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fc670
 * Function: <EXTERNAL>::sin
 * Signature: double sin(double __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_sin_007e0b68)();
  return dVar1;
}


