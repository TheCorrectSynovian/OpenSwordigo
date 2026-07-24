/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f884
 * Function: Caver::ElevatorControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::Create() */

ElevatorControllerComponent * Caver::ElevatorControllerComponent::Create(void)

{
  ElevatorControllerComponent *this;
  
  this = operator_new(0xd0);
  ElevatorControllerComponent(this);
  return this;
}


