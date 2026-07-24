/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003509f8
 * Function: Caver::FireBreathComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::Create() */

FireBreathComponent * Caver::FireBreathComponent::Create(void)

{
  FireBreathComponent *this;
  
  this = operator_new(0x108);
  FireBreathComponent(this);
  return this;
}


