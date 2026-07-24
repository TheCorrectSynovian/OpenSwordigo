/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00396eb8
 * Function: Caver::ChargingMonsterControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ChargingMonsterControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ChargingMonsterControllerComponent::RegisterInterfaces
          (ChargingMonsterControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4ce8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6ba0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


