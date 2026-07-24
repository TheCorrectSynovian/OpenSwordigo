/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005575e4
 * Function: Caver::Camera::DistanceForVisibleAreaWidth
 * Signature: undefined __thiscall DistanceForVisibleAreaWidth(Camera * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::DistanceForVisibleAreaWidth(float) */

float __thiscall Caver::Camera::DistanceForVisibleAreaWidth(Camera *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0xf0);
  fVar1 = tanf(*(float *)(this + 0xf4));
  return param_1 / (fVar2 * fVar1);
}


