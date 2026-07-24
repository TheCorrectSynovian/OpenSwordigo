/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f7c4
 * Function: Caver::CharControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::Create() */

CharControllerComponent * Caver::CharControllerComponent::Create(void)

{
  CharControllerComponent *this;
  
  this = operator_new(0x308);
  CharControllerComponent(this);
  return this;
}


