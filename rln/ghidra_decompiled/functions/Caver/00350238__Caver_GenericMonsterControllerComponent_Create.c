/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350238
 * Function: Caver::GenericMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::Create() */

GenericMonsterControllerComponent * Caver::GenericMonsterControllerComponent::Create(void)

{
  GenericMonsterControllerComponent *this;
  
  this = operator_new(0x120);
  GenericMonsterControllerComponent(this);
  return this;
}


