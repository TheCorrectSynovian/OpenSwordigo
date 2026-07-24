/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003905e4
 * Function: Caver::SpellComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SpellComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SpellComponent::RegisterInterfaces(SpellComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6868);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


