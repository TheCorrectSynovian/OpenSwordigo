/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038209c
 * Function: Caver::DimensionSpellComponent::Clone
 * Signature: undefined __thiscall Clone(DimensionSpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionSpellComponent::Clone() const */

SpellComponent * __thiscall Caver::DimensionSpellComponent::Clone(DimensionSpellComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  SpellComponent *this_00;
  
  this_00 = operator_new(0xc0);
  SpellComponent::SpellComponent(this_00);
  puVar1 = PTR_vtable_007e5f10 + 0x148;
  puVar2 = PTR_vtable_007e5f10 + 0x188;
  *(undefined **)this_00 = PTR_vtable_007e5f10 + 0x10;
  *(undefined **)(this_00 + 0x18) = puVar2;
  *(undefined **)(this_00 + 0x10) = puVar1;
  SpellComponent::InitWithComponent(this_00,(SpellComponent *)this);
  return this_00;
}


