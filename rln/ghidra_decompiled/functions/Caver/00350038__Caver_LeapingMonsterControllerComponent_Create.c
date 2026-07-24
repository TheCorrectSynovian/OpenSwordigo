/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350038
 * Function: Caver::LeapingMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LeapingMonsterControllerComponent::Create() */

LeapingMonsterControllerComponent * Caver::LeapingMonsterControllerComponent::Create(void)

{
  LeapingMonsterControllerComponent *this;
  
  this = operator_new(0x118);
  LeapingMonsterControllerComponent(this);
  return this;
}


