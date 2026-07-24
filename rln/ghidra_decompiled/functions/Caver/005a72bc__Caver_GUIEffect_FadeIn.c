/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a72bc
 * Function: Caver::GUIEffect::FadeIn
 * Signature: undefined __thiscall FadeIn(GUIEffect * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::FadeIn(float) */

void __thiscall Caver::GUIEffect::FadeIn(GUIEffect *this,float param_1)

{
  float fVar1;
  
  fVar1 = DAT_00683734;
  *this = (GUIEffect)0x0;
  *(undefined4 *)(this + 0x38) = 1;
  this[0x40] = (GUIEffect)0x1;
  *(float *)(this + 0x44) = param_1;
  if (param_1 < fVar1) {
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  Update(this,0.0);
  return;
}


