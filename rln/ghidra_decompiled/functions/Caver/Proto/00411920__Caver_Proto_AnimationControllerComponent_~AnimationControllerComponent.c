/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411920
 * Function: Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent
 * Signature: undefined __thiscall ~AnimationControllerComponent(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent() */

void __thiscall
Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent
          (AnimationControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e78a0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


