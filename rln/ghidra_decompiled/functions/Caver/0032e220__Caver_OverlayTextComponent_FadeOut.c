/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e220
 * Function: Caver::OverlayTextComponent::FadeOut
 * Signature: undefined __thiscall FadeOut(OverlayTextComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::FadeOut(float, float) */

void __thiscall
Caver::OverlayTextComponent::FadeOut(OverlayTextComponent *this,float param_1,float param_2)

{
  *(float *)(this + 0xb8) = param_2;
  *(float *)(this + 0xbc) = param_1;
  this[0xb0] = (OverlayTextComponent)0x1;
  *(undefined4 *)(this + 0xb4) = 0;
  return;
}


