/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003506b8
 * Function: Caver::ItemDropComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::Create() */

ItemDropComponent * Caver::ItemDropComponent::Create(void)

{
  ItemDropComponent *this;
  
  this = operator_new(0xb0);
  ItemDropComponent(this);
  return this;
}


