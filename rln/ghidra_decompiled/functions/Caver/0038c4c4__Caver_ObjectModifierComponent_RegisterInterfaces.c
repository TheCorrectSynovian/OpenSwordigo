/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c4c4
 * Function: Caver::ObjectModifierComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ObjectModifierComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectModifierComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ObjectModifierComponent::RegisterInterfaces
          (ObjectModifierComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5b38);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


