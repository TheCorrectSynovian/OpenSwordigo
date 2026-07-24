/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350a38
 * Function: Caver::ProjectileControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::Create() */

ProjectileControllerComponent * Caver::ProjectileControllerComponent::Create(void)

{
  ProjectileControllerComponent *this;
  
  this = operator_new(0x80);
  ProjectileControllerComponent(this);
  return this;
}


