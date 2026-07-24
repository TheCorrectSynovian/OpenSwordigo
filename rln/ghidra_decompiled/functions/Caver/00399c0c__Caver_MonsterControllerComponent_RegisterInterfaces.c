/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399c0c
 * Function: Caver::MonsterControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MonsterControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MonsterControllerComponent::RegisterInterfaces
          (MonsterControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6ba0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


