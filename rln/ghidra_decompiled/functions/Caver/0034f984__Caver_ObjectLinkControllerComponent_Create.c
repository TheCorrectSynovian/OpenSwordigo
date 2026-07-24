/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f984
 * Function: Caver::ObjectLinkControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::Create() */

ObjectLinkControllerComponent * Caver::ObjectLinkControllerComponent::Create(void)

{
  ObjectLinkControllerComponent *this;
  
  this = operator_new(0x128);
  ObjectLinkControllerComponent(this);
  return this;
}


