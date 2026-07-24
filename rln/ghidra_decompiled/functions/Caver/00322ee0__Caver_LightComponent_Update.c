/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322ee0
 * Function: Caver::LightComponent::Update
 * Signature: undefined __thiscall Update(LightComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::Update(float) */

void __thiscall Caver::LightComponent::Update(LightComponent *this,float param_1)

{
  if (this[0x90] != (LightComponent)0x0) {
    if (ABS(*(float *)(this + 0x88) - *(float *)(this + 0x74)) <
        ABS(*(float *)(this + 0x8c) * param_1)) {
      *(float *)(this + 0x74) = *(float *)(this + 0x88);
      this[0x90] = (LightComponent)0x0;
      return;
    }
    *(float *)(this + 0x74) = *(float *)(this + 0x74) + *(float *)(this + 0x8c) * param_1;
  }
  return;
}


