/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c914
 * Function: Caver::AnimationControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(AnimationControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::AnimationControllerComponent::ValueForBindedProperty
          (AnimationControllerComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xa8],true);
    return;
  }
  Component::ValueForBindedProperty((int)this);
  return;
}


