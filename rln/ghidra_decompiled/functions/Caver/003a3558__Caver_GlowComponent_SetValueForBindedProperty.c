/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3558
 * Function: Caver::GlowComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(GlowComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GlowComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::GlowComponent::SetValueForBindedProperty
          (GlowComponent *this,int param_1,BindingValue *param_2)

{
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


