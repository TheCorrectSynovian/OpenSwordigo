/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003500b8
 * Function: Caver::StaticMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::Create() */

StaticMonsterControllerComponent * Caver::StaticMonsterControllerComponent::Create(void)

{
  StaticMonsterControllerComponent *this;
  
  this = operator_new(0x120);
  StaticMonsterControllerComponent(this);
  return this;
}


