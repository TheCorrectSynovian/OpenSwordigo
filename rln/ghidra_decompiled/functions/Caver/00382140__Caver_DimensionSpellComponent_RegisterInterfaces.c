/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382140
 * Function: Caver::DimensionSpellComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(DimensionSpellComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionSpellComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::DimensionSpellComponent::RegisterInterfaces
          (DimensionSpellComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5cb0);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6868);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


