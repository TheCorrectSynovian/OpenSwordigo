/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035b494
 * Function: Caver::CharControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(CharControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::CharControllerComponent::ValueForBindedProperty(CharControllerComponent *this,int param_1)

{
  switch(param_1) {
  case 0x11:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x26c));
    return;
  case 0x12:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x278));
    return;
  case 0x13:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x27c));
    return;
  case 0x14:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x280));
    return;
  case 0x15:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x284));
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


