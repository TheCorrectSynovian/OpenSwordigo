/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033124c
 * Function: Caver::PortalComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(PortalComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::PortalComponent::RegisterInterfaces(PortalComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e68e8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


