/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fef8
 * Function: Caver::MonsterEntityComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::Create() */

MonsterEntityComponent * Caver::MonsterEntityComponent::Create(void)

{
  MonsterEntityComponent *this;
  
  this = operator_new(0x1a0);
  MonsterEntityComponent(this);
  return this;
}


