/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cb90
 * Function: Caver::ProjectileControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ProjectileControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ProjectileControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::ProjectileControllerComponent::SetValueForBindedProperty
          (ProjectileControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 1) {
    this[0x61] = **(ProjectileControllerComponent **)(param_2 + 8);
    return;
  }
  if (param_1 == 0) {
    this[0x60] = **(ProjectileControllerComponent **)(param_2 + 8);
    return;
  }
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


