/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038994c
 * Function: Caver::MagicHookshotComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(MagicHookshotComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicHookshotComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::MagicHookshotComponent::GetEnumValuesForBindedProperty
          (MagicHookshotComponent *this,int param_1,vector *param_2)

{
  SpellComponent::GetEnumValuesForBindedProperty((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


