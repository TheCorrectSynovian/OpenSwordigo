/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003500f8
 * Function: Caver::ShootingMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShootingMonsterControllerComponent::Create() */

ShootingMonsterControllerComponent * Caver::ShootingMonsterControllerComponent::Create(void)

{
  ShootingMonsterControllerComponent *this;
  
  this = operator_new(0x128);
  ShootingMonsterControllerComponent(this);
  return this;
}


