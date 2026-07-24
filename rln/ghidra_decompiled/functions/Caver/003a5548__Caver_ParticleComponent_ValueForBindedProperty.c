/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5548
 * Function: Caver::ParticleComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ParticleComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ParticleComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ParticleComponent::ValueForBindedProperty(ParticleComponent *this,int param_1)

{
  if (param_1 == 1) {
    BindingValue::ValueWithFloat((BindingValue *)(this + -0x10),*(float *)(this + 0x70));
    return;
  }
  if (param_1 == 0) {
    BindingValue::ValueWithString((BindingValue *)(this + 0x60),(string *)0x0);
    return;
  }
  Component::ValueForBindedProperty((int)(BindingValue *)(this + -0x10));
  return;
}


