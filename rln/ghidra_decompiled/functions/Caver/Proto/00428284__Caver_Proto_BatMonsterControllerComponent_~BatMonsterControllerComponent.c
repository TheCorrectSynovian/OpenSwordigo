/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428284
 * Function: Caver::Proto::BatMonsterControllerComponent::~BatMonsterControllerComponent
 * Signature: undefined __thiscall ~BatMonsterControllerComponent(BatMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::~BatMonsterControllerComponent() */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::~BatMonsterControllerComponent
          (BatMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e54c0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


