/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033bad8
 * Function: Caver::SpawnPointComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SpawnPointComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SpawnPointComponent::RegisterInterfaces(SpawnPointComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e52f8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


