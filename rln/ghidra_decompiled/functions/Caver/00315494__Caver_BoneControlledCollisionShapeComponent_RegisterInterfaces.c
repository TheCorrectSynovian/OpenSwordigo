/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315494
 * Function: Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(BoneControlledCollisionShapeComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces
          (BoneControlledCollisionShapeComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7210);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5b08);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5840);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


