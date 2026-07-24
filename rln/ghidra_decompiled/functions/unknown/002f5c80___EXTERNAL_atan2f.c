/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f5c80
 * Function: <EXTERNAL>::atan2f
 * Signature: float atan2f(float __y, float __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float atan2f(float __y,float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_atan2f_007dd670)();
  return fVar1;
}


