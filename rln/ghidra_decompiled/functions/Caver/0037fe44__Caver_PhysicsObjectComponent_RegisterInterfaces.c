/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fe44
 * Function: Caver::PhysicsObjectComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(PhysicsObjectComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::PhysicsObjectComponent::RegisterInterfaces
          (PhysicsObjectComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4ee0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


