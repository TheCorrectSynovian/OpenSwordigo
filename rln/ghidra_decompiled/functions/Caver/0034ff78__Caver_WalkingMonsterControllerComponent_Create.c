/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034ff78
 * Function: Caver::WalkingMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WalkingMonsterControllerComponent::Create() */

WalkingMonsterControllerComponent * Caver::WalkingMonsterControllerComponent::Create(void)

{
  WalkingMonsterControllerComponent *this;
  
  this = operator_new(0xf0);
  WalkingMonsterControllerComponent(this);
  return this;
}


