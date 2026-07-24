/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8d9c
 * Function: Caver::GroundMeshComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(GroundMeshComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::GroundMeshComponent::RegisterInterfaces(GroundMeshComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7528);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


