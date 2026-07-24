/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b37d8
 * Function: Caver::DoorControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(DoorControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::DoorControllerComponent::RegisterInterfaces
          (DoorControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5858);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


