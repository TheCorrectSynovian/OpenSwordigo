/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4d00
 * Function: Caver::OrbitControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(OrbitControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::OrbitControllerComponent::RegisterInterfaces
          (OrbitControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5d58);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


