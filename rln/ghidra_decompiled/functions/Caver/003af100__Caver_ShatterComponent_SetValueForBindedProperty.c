/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af100
 * Function: Caver::ShatterComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ShatterComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShatterComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::ShatterComponent::SetValueForBindedProperty
          (ShatterComponent *this,int param_1,BindingValue *param_2)

{
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


