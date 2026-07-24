/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fa690
 * Function: <EXTERNAL>::sqrt
 * Signature: double sqrt(double __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sqrt(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_sqrt_007dfb78)();
  return dVar1;
}


