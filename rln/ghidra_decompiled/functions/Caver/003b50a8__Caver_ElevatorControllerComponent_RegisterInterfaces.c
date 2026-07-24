/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b50a8
 * Function: Caver::ElevatorControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ElevatorControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ElevatorControllerComponent::RegisterInterfaces
          (ElevatorControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5b78);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


