/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be72c
 * Function: Caver::GroundMeshGeneratorComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(GroundMeshGeneratorComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::GroundMeshGeneratorComponent::RegisterInterfaces
          (GroundMeshGeneratorComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5b68);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


