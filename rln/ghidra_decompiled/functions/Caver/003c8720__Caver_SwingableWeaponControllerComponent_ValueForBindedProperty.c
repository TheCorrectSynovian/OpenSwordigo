/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c8720
 * Function: Caver::SwingableWeaponControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SwingableWeaponControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SwingableWeaponControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SwingableWeaponControllerComponent::ValueForBindedProperty
          (SwingableWeaponControllerComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithString((BindingValue *)(this + 0x80),(string *)0x2);
    return;
  }
  if (param_1 == 1) {
    BindingValue::ValueWithString((BindingValue *)(this + 0x78),(string *)0x1);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


