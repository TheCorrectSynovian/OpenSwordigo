/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a3e8
 * Function: Caver::SoundEffectComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SoundEffectComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SoundEffectComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SoundEffectComponent::ValueForBindedProperty(SoundEffectComponent *this,int param_1)

{
  BindingValue *this_00;
  
  this_00 = (BindingValue *)(this + -0x10);
  if (param_1 == 2) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x74));
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      BindingValue::ValueWithString((BindingValue *)(this + 0x68),(string *)0x0);
      return;
    }
    Component::ValueForBindedProperty((int)this_00);
    return;
  }
  BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x70));
  return;
}


