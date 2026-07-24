/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fe1c0
 * Function: <EXTERNAL>::cos
 * Signature: double cos(double __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_cos_007e1910)();
  return dVar1;
}


