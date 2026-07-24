/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f9c4
 * Function: Caver::TransformComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::Create() */

TransformComponent * Caver::TransformComponent::Create(void)

{
  TransformComponent *this;
  
  this = operator_new(0xb0);
  TransformComponent(this);
  return this;
}


