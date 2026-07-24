/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322f20
 * Function: Caver::LightComponent::Update
 * Signature: undefined __thiscall Update(LightComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::LightComponent::Update(float) */

void __thiscall Caver::LightComponent::Update(LightComponent *this,float param_1)

{
  if (this[0x78] != (LightComponent)0x0) {
    if (ABS(*(float *)(this + 0x70) - *(float *)(this + 0x5c)) <
        ABS(*(float *)(this + 0x74) * param_1)) {
      *(float *)(this + 0x5c) = *(float *)(this + 0x70);
      this[0x78] = (LightComponent)0x0;
      return;
    }
    *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + *(float *)(this + 0x74) * param_1;
  }
  return;
}


