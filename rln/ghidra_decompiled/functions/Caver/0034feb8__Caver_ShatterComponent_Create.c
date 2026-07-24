/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034feb8
 * Function: Caver::ShatterComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShatterComponent::Create() */

ShatterComponent * Caver::ShatterComponent::Create(void)

{
  ShatterComponent *this;
  
  this = operator_new(0x70);
  ShatterComponent(this);
  return this;
}


