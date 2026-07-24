/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363d38
 * Function: Caver::CollectableItemComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(CollectableItemComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::CollectableItemComponent::RegisterInterfaces
          (CollectableItemComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e57a8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


