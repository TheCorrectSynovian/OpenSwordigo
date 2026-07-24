/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b0cbc
 * Function: Caver::SimpleGlowComponent::AnimateToScale
 * Signature: undefined __thiscall AnimateToScale(SimpleGlowComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::AnimateToScale(float, float) */

void __thiscall
Caver::SimpleGlowComponent::AnimateToScale(SimpleGlowComponent *this,float param_1,float param_2)

{
  *(float *)(this + 0xd8) = param_1;
  *(float *)(this + 0xdc) = param_2;
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


