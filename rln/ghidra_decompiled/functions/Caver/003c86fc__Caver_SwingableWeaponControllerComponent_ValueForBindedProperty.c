/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c86fc
 * Function: Caver::SwingableWeaponControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SwingableWeaponControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SwingableWeaponControllerComponent::ValueForBindedProperty
          (SwingableWeaponControllerComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithString((BindingValue *)(this + 0x90),(string *)0x2);
    return;
  }
  if (param_1 == 1) {
    BindingValue::ValueWithString((BindingValue *)(this + 0x88),(string *)0x1);
    return;
  }
  Component::ValueForBindedProperty((int)this);
  return;
}


