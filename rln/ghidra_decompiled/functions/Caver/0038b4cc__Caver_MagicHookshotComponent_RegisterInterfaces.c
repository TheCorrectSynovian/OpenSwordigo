/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038b4cc
 * Function: Caver::MagicHookshotComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MagicHookshotComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MagicHookshotComponent::RegisterInterfaces
          (MagicHookshotComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e50f8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6868);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


