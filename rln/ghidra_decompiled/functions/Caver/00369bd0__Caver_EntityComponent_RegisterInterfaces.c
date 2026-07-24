/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00369bd0
 * Function: Caver::EntityComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(EntityComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::EntityComponent::RegisterInterfaces(EntityComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6c60);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


