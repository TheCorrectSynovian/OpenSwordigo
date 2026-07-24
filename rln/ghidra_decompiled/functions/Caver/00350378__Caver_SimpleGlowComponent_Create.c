/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350378
 * Function: Caver::SimpleGlowComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::Create() */

SimpleGlowComponent * Caver::SimpleGlowComponent::Create(void)

{
  SimpleGlowComponent *this;
  
  this = operator_new(0xe0);
  SimpleGlowComponent(this);
  return this;
}


