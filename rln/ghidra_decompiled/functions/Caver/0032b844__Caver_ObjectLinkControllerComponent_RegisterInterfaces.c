/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b844
 * Function: Caver::ObjectLinkControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ObjectLinkControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ObjectLinkControllerComponent::RegisterInterfaces
          (ObjectLinkControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6970);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


