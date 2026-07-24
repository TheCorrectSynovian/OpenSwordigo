/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322f60
 * Function: Caver::LightComponent::AnimateToIntensity
 * Signature: undefined __thiscall AnimateToIntensity(LightComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::AnimateToIntensity(float, float) */

void __thiscall
Caver::LightComponent::AnimateToIntensity(LightComponent *this,float param_1,float param_2)

{
  if (DAT_00683944 < param_2) {
    this[0x90] = (LightComponent)0x1;
    *(float *)(this + 0x88) = param_1;
    *(float *)(this + 0x8c) = (param_1 - *(float *)(this + 0x74)) / param_2;
    return;
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x88);
  return;
}


