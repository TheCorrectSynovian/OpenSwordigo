/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c33a0
 * Function: Caver::WaterMeshComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(WaterMeshComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::WaterMeshComponent::RegisterInterfaces(WaterMeshComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7498);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


