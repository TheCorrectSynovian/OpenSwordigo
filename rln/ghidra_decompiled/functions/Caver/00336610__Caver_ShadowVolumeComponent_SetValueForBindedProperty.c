/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336610
 * Function: Caver::ShadowVolumeComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ShadowVolumeComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShadowVolumeComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::ShadowVolumeComponent::SetValueForBindedProperty
          (ShadowVolumeComponent *this,int param_1,BindingValue *param_2)

{
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


