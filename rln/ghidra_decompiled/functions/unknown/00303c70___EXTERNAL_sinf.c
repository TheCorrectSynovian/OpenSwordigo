/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00303c70
 * Function: <EXTERNAL>::sinf
 * Signature: float sinf(float __x)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float sinf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_sinf_007e4668)();
  return fVar1;
}


