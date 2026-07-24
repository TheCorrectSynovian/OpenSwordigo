/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003507b8
 * Function: Caver::TransformControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::Create() */

TransformControllerComponent * Caver::TransformControllerComponent::Create(void)

{
  TransformControllerComponent *this;
  
  this = operator_new(0xc0);
  TransformControllerComponent(this);
  return this;
}


