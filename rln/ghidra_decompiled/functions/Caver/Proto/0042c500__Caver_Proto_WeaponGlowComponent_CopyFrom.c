/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c500
 * Function: Caver::Proto::WeaponGlowComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(WeaponGlowComponent * this, WeaponGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::CopyFrom(Caver::Proto::WeaponGlowComponent const&) */

void __thiscall
Caver::Proto::WeaponGlowComponent::CopyFrom(WeaponGlowComponent *this,WeaponGlowComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


