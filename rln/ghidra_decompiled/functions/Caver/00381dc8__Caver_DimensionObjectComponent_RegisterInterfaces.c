/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381dc8
 * Function: Caver::DimensionObjectComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(DimensionObjectComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionObjectComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::DimensionObjectComponent::RegisterInterfaces
          (DimensionObjectComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e76f0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


