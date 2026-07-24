/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004117c0
 * Function: Caver::Proto::AnimationControllerComponent::AnimationControllerComponent
 * Signature: undefined __thiscall AnimationControllerComponent(AnimationControllerComponent * this, AnimationControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::AnimationControllerComponent(Caver::Proto::AnimationControllerComponent
   const&) */

void __thiscall
Caver::Proto::AnimationControllerComponent::AnimationControllerComponent
          (AnimationControllerComponent *this,AnimationControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e78a0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


