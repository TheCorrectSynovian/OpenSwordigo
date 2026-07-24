/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f844
 * Function: Caver::BushControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::Create() */

BushControllerComponent * Caver::BushControllerComponent::Create(void)

{
  BushControllerComponent *this;
  
  this = operator_new(0xc0);
  BushControllerComponent(this);
  return this;
}


