/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350678
 * Function: Caver::CollectableItemComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::Create() */

CollectableItemComponent * Caver::CollectableItemComponent::Create(void)

{
  CollectableItemComponent *this;
  
  this = operator_new(0xb8);
  CollectableItemComponent(this);
  return this;
}


