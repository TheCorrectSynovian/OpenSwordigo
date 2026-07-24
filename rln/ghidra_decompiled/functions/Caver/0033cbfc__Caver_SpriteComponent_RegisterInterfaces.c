/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033cbfc
 * Function: Caver::SpriteComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SpriteComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SpriteComponent::RegisterInterfaces(SpriteComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6550);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


