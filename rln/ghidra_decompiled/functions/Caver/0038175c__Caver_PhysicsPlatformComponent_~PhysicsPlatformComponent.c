/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038175c
 * Function: Caver::PhysicsPlatformComponent::~PhysicsPlatformComponent
 * Signature: undefined __thiscall ~PhysicsPlatformComponent(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::~PhysicsPlatformComponent() */

void __thiscall
Caver::PhysicsPlatformComponent::~PhysicsPlatformComponent(PhysicsPlatformComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


