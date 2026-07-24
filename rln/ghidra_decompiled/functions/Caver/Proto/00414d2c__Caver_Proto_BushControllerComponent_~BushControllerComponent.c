/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414d2c
 * Function: Caver::Proto::BushControllerComponent::~BushControllerComponent
 * Signature: undefined __thiscall ~BushControllerComponent(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::~BushControllerComponent() */

void __thiscall
Caver::Proto::BushControllerComponent::~BushControllerComponent(BushControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4c90 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


