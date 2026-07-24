/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c95c
 * Function: Caver::AnimationControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(AnimationControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::AnimationControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::AnimationControllerComponent::SetValueForBindedProperty
          (AnimationControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 2) {
    this[0x98] = **(AnimationControllerComponent **)(param_2 + 8);
    return;
  }
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


