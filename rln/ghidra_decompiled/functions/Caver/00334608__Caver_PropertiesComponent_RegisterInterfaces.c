/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334608
 * Function: Caver::PropertiesComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(PropertiesComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::PropertiesComponent::RegisterInterfaces(PropertiesComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e59f0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


