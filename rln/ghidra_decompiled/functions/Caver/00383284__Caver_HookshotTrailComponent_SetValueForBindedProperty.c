/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383284
 * Function: Caver::HookshotTrailComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(HookshotTrailComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::HookshotTrailComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::HookshotTrailComponent::SetValueForBindedProperty
          (HookshotTrailComponent *this,int param_1,BindingValue *param_2)

{
  GlowComponent::SetValueForBindedProperty((GlowComponent *)(this + -0x10),param_1,param_2);
  return;
}


