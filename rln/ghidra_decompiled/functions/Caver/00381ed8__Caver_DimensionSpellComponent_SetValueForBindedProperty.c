/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381ed8
 * Function: Caver::DimensionSpellComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(DimensionSpellComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DimensionSpellComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::DimensionSpellComponent::SetValueForBindedProperty
          (DimensionSpellComponent *this,int param_1,BindingValue *param_2)

{
  SpellComponent::SetValueForBindedProperty((SpellComponent *)(this + -0x10),param_1,param_2);
  return;
}


