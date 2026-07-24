/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003984e0
 * Function: Caver::GenericMonsterControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(GenericMonsterControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::GenericMonsterControllerComponent::RegisterInterfaces
          (GenericMonsterControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6dc8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6ba0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


