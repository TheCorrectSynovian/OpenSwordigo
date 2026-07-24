/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cb1c
 * Function: Caver::ProjectileControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ProjectileControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ProjectileControllerComponent::ValueForBindedProperty
          (ProjectileControllerComponent *this,int param_1)

{
  if (param_1 == 1) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x71],true);
    return;
  }
  if (param_1 == 0) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x70],false);
    return;
  }
  Component::ValueForBindedProperty((int)this);
  return;
}


