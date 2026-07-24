/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367b54
 * Function: Caver::EntityActionComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(EntityActionComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::EntityActionComponent::RegisterInterfaces
          (EntityActionComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5d68);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


