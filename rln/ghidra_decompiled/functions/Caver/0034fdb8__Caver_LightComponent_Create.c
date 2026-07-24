/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fdb8
 * Function: Caver::LightComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::Create() */

LightComponent * Caver::LightComponent::Create(void)

{
  LightComponent *this;
  
  this = operator_new(0xb0);
  LightComponent(this);
  return this;
}


