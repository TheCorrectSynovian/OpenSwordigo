/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350138
 * Function: Caver::ProjectileMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::Create() */

ProjectileMonsterControllerComponent * Caver::ProjectileMonsterControllerComponent::Create(void)

{
  ProjectileMonsterControllerComponent *this;
  
  this = operator_new(0xd0);
  ProjectileMonsterControllerComponent(this);
  return this;
}


