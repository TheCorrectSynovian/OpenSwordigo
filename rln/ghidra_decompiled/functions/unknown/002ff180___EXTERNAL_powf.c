/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002ff180
 * Function: <EXTERNAL>::powf
 * Signature: float powf(float __x, float __y)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_powf_007e20f0)();
  return fVar1;
}


