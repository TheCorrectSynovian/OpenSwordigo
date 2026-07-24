/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381874
 * Function: Caver::PhysicsPlatformComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(PhysicsPlatformComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::PhysicsPlatformComponent::RegisterInterfaces
          (PhysicsPlatformComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4c38);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


