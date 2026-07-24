/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350178
 * Function: Caver::BatMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BatMonsterControllerComponent::Create() */

BatMonsterControllerComponent * Caver::BatMonsterControllerComponent::Create(void)

{
  BatMonsterControllerComponent *this;
  
  this = operator_new(0x108);
  BatMonsterControllerComponent(this);
  return this;
}


