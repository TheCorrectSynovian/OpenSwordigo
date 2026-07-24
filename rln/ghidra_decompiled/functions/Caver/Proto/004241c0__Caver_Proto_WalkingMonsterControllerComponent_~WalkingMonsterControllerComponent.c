/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004241c0
 * Function: Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent
 * Signature: undefined __thiscall ~WalkingMonsterControllerComponent(WalkingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent() */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent
          (WalkingMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e63f8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


