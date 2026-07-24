/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b23c
 * Function: Caver::Proto::SwingableWeaponControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SwingableWeaponControllerComponent * this, SwingableWeaponControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::CopyFrom(Caver::Proto::SwingableWeaponControllerComponent
   const&) */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::CopyFrom
          (SwingableWeaponControllerComponent *this,SwingableWeaponControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


