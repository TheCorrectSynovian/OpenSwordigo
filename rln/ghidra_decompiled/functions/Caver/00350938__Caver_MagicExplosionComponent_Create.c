/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350938
 * Function: Caver::MagicExplosionComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::Create() */

MagicExplosionComponent * Caver::MagicExplosionComponent::Create(void)

{
  MagicExplosionComponent *this;
  
  this = operator_new(0x188);
  MagicExplosionComponent(this);
  return this;
}


