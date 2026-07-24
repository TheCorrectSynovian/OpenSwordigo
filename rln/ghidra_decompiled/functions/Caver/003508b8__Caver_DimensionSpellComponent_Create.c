/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003508b8
 * Function: Caver::DimensionSpellComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionSpellComponent::Create() */

DimensionSpellComponent * Caver::DimensionSpellComponent::Create(void)

{
  DimensionSpellComponent *this;
  
  this = operator_new(0xc0);
  DimensionSpellComponent(this);
  return this;
}


