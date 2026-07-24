/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a3b0
 * Function: Caver::SoundEffectComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(SoundEffectComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SoundEffectComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::SoundEffectComponent::GetEnumValuesForBindedProperty
          (SoundEffectComponent *this,int param_1,vector *param_2)

{
  Component::GetEnumValuesForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


