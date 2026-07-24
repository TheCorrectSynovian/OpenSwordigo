/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fd78
 * Function: Caver::WeaponGlowComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::Create() */

WeaponGlowComponent * Caver::WeaponGlowComponent::Create(void)

{
  WeaponGlowComponent *this;
  
  this = operator_new(0xf8);
  WeaponGlowComponent(this);
  return this;
}


