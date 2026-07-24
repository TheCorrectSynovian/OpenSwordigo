/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381eec
 * Function: Caver::DimensionSpellComponent::Cast
 * Signature: undefined __thiscall Cast(DimensionSpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionSpellComponent::Cast() */

void __thiscall Caver::DimensionSpellComponent::Cast(DimensionSpellComponent *this)

{
  SpellComponent::Cast((SpellComponent *)this);
  this[0xb8] = (DimensionSpellComponent)0x1;
  return;
}


