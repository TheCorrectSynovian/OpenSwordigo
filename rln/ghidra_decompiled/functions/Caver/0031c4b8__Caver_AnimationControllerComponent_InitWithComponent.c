/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c4b8
 * Function: Caver::AnimationControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(AnimationControllerComponent * this, AnimationControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::InitWithComponent(Caver::AnimationControllerComponent
   const*) */

void __thiscall
Caver::AnimationControllerComponent::InitWithComponent
          (AnimationControllerComponent *this,AnimationControllerComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  this[0xa8] = param_1[0xa8];
  return;
}


