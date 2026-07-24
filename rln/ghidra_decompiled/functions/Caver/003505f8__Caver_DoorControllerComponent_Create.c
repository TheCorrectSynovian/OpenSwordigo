/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003505f8
 * Function: Caver::DoorControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::Create() */

DoorControllerComponent * Caver::DoorControllerComponent::Create(void)

{
  DoorControllerComponent *this;
  
  this = operator_new(0xd8);
  DoorControllerComponent(this);
  return this;
}


