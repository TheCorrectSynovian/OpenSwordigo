/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fe5c0
 * Function: <EXTERNAL>::tanf
 * Signature: float tanf(float __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float tanf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_tanf_007e1b10)();
  return fVar1;
}


