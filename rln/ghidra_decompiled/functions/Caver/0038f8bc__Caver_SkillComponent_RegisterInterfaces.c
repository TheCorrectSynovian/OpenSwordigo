/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f8bc
 * Function: Caver::SkillComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SkillComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SkillComponent::RegisterInterfaces(SkillComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6ee0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


