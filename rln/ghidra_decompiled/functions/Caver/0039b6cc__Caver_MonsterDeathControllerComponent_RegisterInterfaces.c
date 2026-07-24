/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039b6cc
 * Function: Caver::MonsterDeathControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MonsterDeathControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MonsterDeathControllerComponent::RegisterInterfaces
          (MonsterDeathControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6aa0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


