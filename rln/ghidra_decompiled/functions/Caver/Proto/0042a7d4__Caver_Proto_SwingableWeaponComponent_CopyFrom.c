/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042a7d4
 * Function: Caver::Proto::SwingableWeaponComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SwingableWeaponComponent * this, SwingableWeaponComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::CopyFrom(Caver::Proto::SwingableWeaponComponent const&)
    */

void __thiscall
Caver::Proto::SwingableWeaponComponent::CopyFrom
          (SwingableWeaponComponent *this,SwingableWeaponComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


