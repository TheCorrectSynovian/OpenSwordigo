/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398f98
 * Function: Caver::LeapingMonsterControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(LeapingMonsterControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LeapingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::LeapingMonsterControllerComponent::RegisterInterfaces
          (LeapingMonsterControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5178);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6ba0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


