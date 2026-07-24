/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ccf38
 * Function: Caver::WeaponTrailComponent::ResetTrail
 * Signature: undefined __thiscall ResetTrail(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::ResetTrail() */

void __thiscall Caver::WeaponTrailComponent::ResetTrail(WeaponTrailComponent *this)

{
  WeaponTrail::Clear((WeaponTrail *)(this + 0x70));
  this[0x94] = (WeaponTrailComponent)0x0;
  return;
}


