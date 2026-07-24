/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fc160
 * Function: <EXTERNAL>::fmodf
 * Signature: float fmodf(float __x, float __y)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float fmodf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_fmodf_007e08e0)();
  return fVar1;
}


