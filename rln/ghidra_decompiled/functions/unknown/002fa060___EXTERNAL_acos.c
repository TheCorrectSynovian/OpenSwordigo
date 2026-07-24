/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fa060
 * Function: <EXTERNAL>::acos
 * Signature: double acos(double __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double acos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_acos_007df860)();
  return dVar1;
}


