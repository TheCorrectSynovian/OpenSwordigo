/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036e428
 * Function: Caver::EntityControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(EntityControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::EntityControllerComponent::RegisterInterfaces
          (EntityControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7bc0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


