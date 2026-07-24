/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381eb4
 * Function: Caver::DimensionSpellComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(DimensionSpellComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DimensionSpellComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::DimensionSpellComponent::GetBindings(DimensionSpellComponent *this,vector *param_1)

{
  SpellComponent::GetBindings((SpellComponent *)(this + -0x10),param_1);
  return;
}


