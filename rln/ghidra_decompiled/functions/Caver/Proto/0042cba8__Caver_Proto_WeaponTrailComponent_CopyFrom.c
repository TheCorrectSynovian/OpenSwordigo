/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cba8
 * Function: Caver::Proto::WeaponTrailComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(WeaponTrailComponent * this, WeaponTrailComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::CopyFrom(Caver::Proto::WeaponTrailComponent const&) */

void __thiscall
Caver::Proto::WeaponTrailComponent::CopyFrom
          (WeaponTrailComponent *this,WeaponTrailComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


