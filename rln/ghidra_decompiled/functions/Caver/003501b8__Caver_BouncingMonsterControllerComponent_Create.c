/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003501b8
 * Function: Caver::BouncingMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::Create() */

BouncingMonsterControllerComponent * Caver::BouncingMonsterControllerComponent::Create(void)

{
  BouncingMonsterControllerComponent *this;
  
  this = operator_new(0x120);
  BouncingMonsterControllerComponent(this);
  return this;
}


