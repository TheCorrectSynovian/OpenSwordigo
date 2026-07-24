/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003504f8
 * Function: Caver::PortalComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::Create() */

PortalComponent * Caver::PortalComponent::Create(void)

{
  PortalComponent *this;
  
  this = operator_new(0xa8);
  PortalComponent(this);
  return this;
}


