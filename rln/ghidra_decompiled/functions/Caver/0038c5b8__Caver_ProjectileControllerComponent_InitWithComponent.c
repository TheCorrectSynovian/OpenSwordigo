/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c5b8
 * Function: Caver::ProjectileControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ProjectileControllerComponent * this, ProjectileControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::InitWithComponent(Caver::ProjectileControllerComponent
   const*) */

void __thiscall
Caver::ProjectileControllerComponent::InitWithComponent
          (ProjectileControllerComponent *this,ProjectileControllerComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  this[0x70] = param_1[0x70];
  this[0x71] = param_1[0x71];
  return;
}


