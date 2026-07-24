/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003006d0
 * Function: <EXTERNAL>::tan
 * Signature: double tan(double __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double tan(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_tan_007e2b98)();
  return dVar1;
}


