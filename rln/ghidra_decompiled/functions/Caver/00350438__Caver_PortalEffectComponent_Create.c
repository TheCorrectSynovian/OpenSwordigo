/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350438
 * Function: Caver::PortalEffectComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::Create() */

PortalEffectComponent * Caver::PortalEffectComponent::Create(void)

{
  PortalEffectComponent *this;
  
  this = operator_new(0x100);
  PortalEffectComponent(this);
  return this;
}


