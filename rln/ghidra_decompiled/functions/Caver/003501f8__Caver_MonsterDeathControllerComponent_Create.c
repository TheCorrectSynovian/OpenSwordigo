/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003501f8
 * Function: Caver::MonsterDeathControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::Create() */

MonsterDeathControllerComponent * Caver::MonsterDeathControllerComponent::Create(void)

{
  MonsterDeathControllerComponent *this;
  
  this = operator_new(200);
  MonsterDeathControllerComponent(this);
  return this;
}


