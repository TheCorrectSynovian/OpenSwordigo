/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356bc4
 * Function: Caver::CharAnimControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(CharAnimControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::CharAnimControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::CharAnimControllerComponent::SetValueForBindedProperty
          (CharAnimControllerComponent *this,int param_1,BindingValue *param_2)

{
  AnimationControllerComponent::SetValueForBindedProperty
            ((AnimationControllerComponent *)(this + -0x10),param_1,param_2);
  return;
}


