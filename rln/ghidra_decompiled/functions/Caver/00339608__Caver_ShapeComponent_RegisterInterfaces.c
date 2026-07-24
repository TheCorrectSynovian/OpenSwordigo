/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339608
 * Function: Caver::ShapeComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ShapeComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ShapeComponent::RegisterInterfaces(ShapeComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5840);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


