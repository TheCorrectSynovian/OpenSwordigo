/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392e58
 * Function: Caver::AttackComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(AttackComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::AttackComponent::RegisterInterfaces(AttackComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5638);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


