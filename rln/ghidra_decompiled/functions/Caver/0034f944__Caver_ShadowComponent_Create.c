/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f944
 * Function: Caver::ShadowComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::Create() */

ShadowComponent * Caver::ShadowComponent::Create(void)

{
  ShadowComponent *this;
  
  this = operator_new(0xe0);
  ShadowComponent(this);
  return this;
}


