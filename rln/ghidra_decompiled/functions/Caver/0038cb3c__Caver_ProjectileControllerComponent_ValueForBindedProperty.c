/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cb3c
 * Function: Caver::ProjectileControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ProjectileControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ProjectileControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ProjectileControllerComponent::ValueForBindedProperty
          (ProjectileControllerComponent *this,int param_1)

{
  if (param_1 == 1) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x61],true);
    return;
  }
  if (param_1 == 0) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x60],false);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


