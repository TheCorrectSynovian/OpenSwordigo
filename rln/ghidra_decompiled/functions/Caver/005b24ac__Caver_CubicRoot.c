/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b24ac
 * Function: Caver::CubicRoot
 * Signature: undefined __cdecl CubicRoot(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CubicRoot(float) */

float Caver::CubicRoot(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = powf(ABS(param_1),DAT_00696a30);
  fVar2 = -1.0;
  if (0.0 <= param_1) {
    fVar2 = 1.0;
  }
  return fVar2 * fVar1;
}


