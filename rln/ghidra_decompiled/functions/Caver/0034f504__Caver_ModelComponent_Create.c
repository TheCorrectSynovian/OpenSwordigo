/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f504
 * Function: Caver::ModelComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::Create() */

ModelComponent * Caver::ModelComponent::Create(void)

{
  ModelComponent *this;
  
  this = operator_new(0x140);
  ModelComponent(this);
  return this;
}


