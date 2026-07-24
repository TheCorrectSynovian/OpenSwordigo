/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c4dd8
 * Function: Caver::SwingableWeaponComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SwingableWeaponComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SwingableWeaponComponent::ValueForBindedProperty(SwingableWeaponComponent *this,int param_1)

{
  switch(param_1) {
  case 2:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x19c));
    return;
  case 3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x1a0));
    return;
  case 4:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x1a4));
    return;
  case 5:
    BindingValue::ValueWithFloatColor
              ((BindingValue *)(this + 0x1a8),(FloatColor *)(ulong)(uint)param_1);
    return;
  case 6:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x1bc));
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


