/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426e04
 * Function: Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent
 * Signature: undefined __thiscall ~SkellyMonsterControllerComponent(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent() */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent
          (SkellyMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4c78 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


