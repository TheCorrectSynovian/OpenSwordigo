/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350338
 * Function: Caver::FireEmitterComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::Create() */

FireEmitterComponent * Caver::FireEmitterComponent::Create(void)

{
  FireEmitterComponent *this;
  
  this = operator_new(0xf0);
  FireEmitterComponent(this);
  return this;
}


