/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435b44
 * Function: Caver::Proto::ProjectileControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ProjectileControllerComponent * this, ProjectileControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::CopyFrom(Caver::Proto::ProjectileControllerComponent
   const&) */

void __thiscall
Caver::Proto::ProjectileControllerComponent::CopyFrom
          (ProjectileControllerComponent *this,ProjectileControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


