/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034ff38
 * Function: Caver::AttackComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::Create() */

AttackComponent * Caver::AttackComponent::Create(void)

{
  AttackComponent *this;
  
  this = operator_new(0x138);
  AttackComponent(this);
  return this;
}


