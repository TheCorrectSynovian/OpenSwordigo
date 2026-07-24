/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031bbd8
 * Function: Caver::CollisionShapeComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(CollisionShapeComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::CollisionShapeComponent::RegisterInterfaces
          (CollisionShapeComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5b08);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5840);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


