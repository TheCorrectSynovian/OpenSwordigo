/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a3b8
 * Function: Caver::SoundEffectComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SoundEffectComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SoundEffectComponent::ValueForBindedProperty(SoundEffectComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x84));
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      BindingValue::ValueWithString((BindingValue *)(this + 0x78),(string *)0x0);
      return;
    }
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x80));
  return;
}


