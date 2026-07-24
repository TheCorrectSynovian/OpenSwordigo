/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fe38
 * Function: Caver::PhysicsPlatformComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::Create() */

PhysicsPlatformComponent * Caver::PhysicsPlatformComponent::Create(void)

{
  PhysicsPlatformComponent *this;
  
  this = operator_new(0xa8);
  PhysicsPlatformComponent(this);
  return this;
}


