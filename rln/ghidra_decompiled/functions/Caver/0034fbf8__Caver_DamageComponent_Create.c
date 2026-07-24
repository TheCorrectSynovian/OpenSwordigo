/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fbf8
 * Function: Caver::DamageComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::Create() */

DamageComponent * Caver::DamageComponent::Create(void)

{
  DamageComponent *this;
  
  this = operator_new(0xd8);
  DamageComponent(this);
  return this;
}


