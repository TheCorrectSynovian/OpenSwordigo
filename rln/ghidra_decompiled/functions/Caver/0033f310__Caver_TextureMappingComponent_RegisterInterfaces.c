/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033f310
 * Function: Caver::TextureMappingComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(TextureMappingComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::TextureMappingComponent::RegisterInterfaces
          (TextureMappingComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7128);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


