/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381ec0
 * Function: Caver::DimensionSpellComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(DimensionSpellComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DimensionSpellComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::DimensionSpellComponent::GetEnumValuesForBindedProperty
          (DimensionSpellComponent *this,int param_1,vector *param_2)

{
  SpellComponent::GetEnumValuesForBindedProperty((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


