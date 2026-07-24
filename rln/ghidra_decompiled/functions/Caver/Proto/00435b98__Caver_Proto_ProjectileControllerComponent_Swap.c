/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435b98
 * Function: Caver::Proto::ProjectileControllerComponent::Swap
 * Signature: undefined __thiscall Swap(ProjectileControllerComponent * this, ProjectileControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::Swap(Caver::Proto::ProjectileControllerComponent*)
    */

void __thiscall
Caver::Proto::ProjectileControllerComponent::Swap
          (ProjectileControllerComponent *this,ProjectileControllerComponent *param_1)

{
  undefined4 uVar1;
  ProjectileControllerComponent PVar2;
  
  if (param_1 != this) {
    PVar2 = this[0xc];
    this[0xc] = param_1[0xc];
    param_1[0xc] = PVar2;
    PVar2 = this[0xd];
    this[0xd] = param_1[0xd];
    param_1[0xd] = PVar2;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


