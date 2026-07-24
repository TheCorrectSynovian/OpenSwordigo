/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042886c
 * Function: Caver::Proto::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent
 * Signature: undefined __thiscall ~BouncingMonsterControllerComponent(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent() */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent
          (BouncingMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5a20 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


