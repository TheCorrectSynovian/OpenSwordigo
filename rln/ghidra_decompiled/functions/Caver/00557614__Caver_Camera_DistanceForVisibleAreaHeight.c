/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557614
 * Function: Caver::Camera::DistanceForVisibleAreaHeight
 * Signature: undefined __thiscall DistanceForVisibleAreaHeight(Camera * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::DistanceForVisibleAreaHeight(float) */

float __thiscall Caver::Camera::DistanceForVisibleAreaHeight(Camera *this,float param_1)

{
  float fVar1;
  
  fVar1 = tanf(*(float *)(this + 0xf4));
  return param_1 / fVar1;
}


