/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ccf60
 * Function: Caver::WeaponTrailComponent::AddSegment
 * Signature: undefined __thiscall AddSegment(WeaponTrailComponent * this, Vector3 * param_1, Vector3 * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::AddSegment(Caver::Vector3 const&, Caver::Vector3 const&, float) */

void __thiscall
Caver::WeaponTrailComponent::AddSegment
          (WeaponTrailComponent *this,Vector3 *param_1,Vector3 *param_2,float param_3)

{
  WeaponTrail::AddSegment((WeaponTrail *)(this + 0x70),param_1,param_2,param_3);
  return;
}


