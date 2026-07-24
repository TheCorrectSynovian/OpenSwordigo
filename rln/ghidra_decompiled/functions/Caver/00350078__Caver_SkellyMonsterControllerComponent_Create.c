/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350078
 * Function: Caver::SkellyMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::Create() */

SkellyMonsterControllerComponent * Caver::SkellyMonsterControllerComponent::Create(void)

{
  SkellyMonsterControllerComponent *this;
  
  this = operator_new(0x128);
  SkellyMonsterControllerComponent(this);
  return this;
}


