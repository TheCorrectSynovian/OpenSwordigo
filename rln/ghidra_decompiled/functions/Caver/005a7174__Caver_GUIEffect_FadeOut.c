/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7174
 * Function: Caver::GUIEffect::FadeOut
 * Signature: undefined __thiscall FadeOut(GUIEffect * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::FadeOut(float) */

void __thiscall Caver::GUIEffect::FadeOut(GUIEffect *this,float param_1)

{
  float fVar1;
  
  fVar1 = DAT_00683734;
                    /* try { // try from 005a7178 to 006a71a7 has its CatchHandler @ 005a722c */
  *this = (GUIEffect)0x0;
  *(undefined4 *)(this + 0x38) = 1;
  this[0x40] = (GUIEffect)0x0;
  *(float *)(this + 0x44) = param_1;
  if (param_1 < fVar1) {
    *(undefined4 *)(this + 0x4c) = 0x3f800000;
  }
  Update(this,0.0);
  return;
}


