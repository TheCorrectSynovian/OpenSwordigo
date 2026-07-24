/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037448c
 * Function: Caver::HeroEntityComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(HeroEntityComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::HeroEntityComponent::RegisterInterfaces(HeroEntityComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5a28);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6c60);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


