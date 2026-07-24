/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aebc0
 * Function: Caver::PortalEffectComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(PortalEffectComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::PortalEffectComponent::RegisterInterfaces
          (PortalEffectComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e55d8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6330);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


