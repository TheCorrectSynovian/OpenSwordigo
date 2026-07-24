/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381e60
 * Function: Caver::DimensionSpellComponent::DimensionSpellComponent
 * Signature: undefined __thiscall DimensionSpellComponent(DimensionSpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionSpellComponent::DimensionSpellComponent() */

void __thiscall
Caver::DimensionSpellComponent::DimensionSpellComponent(DimensionSpellComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  SpellComponent::SpellComponent((SpellComponent *)this);
  puVar1 = PTR_vtable_007e5f10 + 0x148;
  puVar2 = PTR_vtable_007e5f10 + 0x188;
  *(undefined **)this = PTR_vtable_007e5f10 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


