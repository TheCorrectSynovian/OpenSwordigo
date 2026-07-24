/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002ff1f0
 * Function: <EXTERNAL>::cosf
 * Signature: float cosf(float __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float cosf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_cosf_007e2128)();
  return fVar1;
}


