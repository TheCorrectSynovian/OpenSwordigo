/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d3c4
 * Function: Caver::GUISlider::SetValueFromViewLocation
 * Signature: undefined __thiscall SetValueFromViewLocation(GUISlider * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::SetValueFromViewLocation(float) */

void __thiscall Caver::GUISlider::SetValueFromViewLocation(GUISlider *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x84);
  fVar2 = *(float *)(this + 0x134);
  fVar3 = *(float *)(this + 0x138);
                    /* try { // try from 0059d3e8 to 0069d44f has its CatchHandler @ 0059d470 */
  fVar1 = fVar2 + ((param_1 - fVar4) / ((fVar4 + *(float *)(this + 0x8c)) - fVar4)) *
                  (fVar3 - fVar2);
  fVar4 = fVar2;
  if (fVar2 <= fVar1) {
    fVar4 = fVar1;
  }
  fVar1 = fVar3;
  if (fVar4 <= fVar3) {
    fVar1 = fVar4;
  }
  if (this[0x16c] != (GUISlider)0x0) {
    fVar1 = (float)(int)fVar1;
  }
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(undefined4 *)(this + 300) = 0;
  *(float *)(this + 0x124) = fVar3;
  *(float *)(this + 0x128) = fVar3;
  this[0x160] = (GUISlider)0x1;
  return;
}


