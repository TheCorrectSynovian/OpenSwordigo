/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350be0
 * Function: Caver::UtilityShapeComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(UtilityShapeComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::UtilityShapeComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::UtilityShapeComponent::RegisterInterfaces
          (UtilityShapeComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7d60);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5840);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


