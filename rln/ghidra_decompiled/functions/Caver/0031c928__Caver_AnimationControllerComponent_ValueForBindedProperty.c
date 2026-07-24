/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c928
 * Function: Caver::AnimationControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(AnimationControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::AnimationControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::AnimationControllerComponent::ValueForBindedProperty
          (AnimationControllerComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x98],true);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


