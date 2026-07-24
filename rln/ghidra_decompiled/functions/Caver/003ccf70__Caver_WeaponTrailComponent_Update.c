/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ccf70
 * Function: Caver::WeaponTrailComponent::Update
 * Signature: undefined __thiscall Update(WeaponTrailComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WeaponTrailComponent::Update(float) */

void __thiscall Caver::WeaponTrailComponent::Update(WeaponTrailComponent *this,float param_1)

{
  WeaponTrail::Update((WeaponTrail *)(this + 0x58),param_1);
  return;
}


