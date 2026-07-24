/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323720
 * Function: Caver::LightComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(LightComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::LightComponent::RegisterInterfaces(LightComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5298);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


