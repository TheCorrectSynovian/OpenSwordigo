/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3588
 * Function: Caver::GlowComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(GlowComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GlowComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::GlowComponent::RegisterInterfaces(GlowComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6330);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


