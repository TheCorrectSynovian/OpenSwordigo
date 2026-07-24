/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557640
 * Function: Caver::Camera::MinDistanceForVisibleAreaSize
 * Signature: undefined __thiscall MinDistanceForVisibleAreaSize(Camera * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&) */

float __thiscall Caver::Camera::MinDistanceForVisibleAreaSize(Camera *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(this + 0xf0);
  fVar2 = *(float *)param_1;
  fVar1 = tanf(*(float *)(this + 0xf4));
  fVar4 = *(float *)(param_1 + 4);
  fVar2 = fVar2 / (fVar3 * fVar1);
  fVar3 = tanf(*(float *)(this + 0xf4));
  fVar1 = fVar4 / fVar3;
  if (fVar4 / fVar3 <= fVar2) {
    fVar1 = fVar2;
  }
                    /* catch() { ... } // from try @ 00557500 with catch @ 0055768c */
  return fVar1;
}


