/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037dc90
 * Function: Caver::MonsterEntityComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MonsterEntityComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MonsterEntityComponent::RegisterInterfaces
          (MonsterEntityComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4d78);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6c60);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


