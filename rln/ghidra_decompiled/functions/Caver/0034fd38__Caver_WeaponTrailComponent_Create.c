/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fd38
 * Function: Caver::WeaponTrailComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::Create() */

WeaponTrailComponent * Caver::WeaponTrailComponent::Create(void)

{
  WeaponTrailComponent *this;
  
  this = operator_new(0xd0);
  WeaponTrailComponent(this);
  return this;
}


