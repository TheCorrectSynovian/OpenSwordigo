/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ac24
 * Function: Caver::ManaComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ManaComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ManaComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::ManaComponent::SetValueForBindedProperty
          (ManaComponent *this,int param_1,BindingValue *param_2)

{
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


