/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cb60
 * Function: Caver::ProjectileControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ProjectileControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue const&)
    */

void __thiscall
Caver::ProjectileControllerComponent::SetValueForBindedProperty
          (ProjectileControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 1) {
    this[0x71] = **(ProjectileControllerComponent **)(param_2 + 8);
    return;
  }
  if (param_1 == 0) {
    this[0x70] = **(ProjectileControllerComponent **)(param_2 + 8);
    return;
  }
  Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  return;
}


