/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f744
 * Function: Caver::EntityControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::Create() */

EntityControllerComponent * Caver::EntityControllerComponent::Create(void)

{
  EntityControllerComponent *this;
  
  this = operator_new(0x150);
  EntityControllerComponent(this);
  return this;
}


