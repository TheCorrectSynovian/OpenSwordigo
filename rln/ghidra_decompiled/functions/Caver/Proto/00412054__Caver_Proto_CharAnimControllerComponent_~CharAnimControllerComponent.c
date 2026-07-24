/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412054
 * Function: Caver::Proto::CharAnimControllerComponent::~CharAnimControllerComponent
 * Signature: undefined __thiscall ~CharAnimControllerComponent(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::~CharAnimControllerComponent() */

void __thiscall
Caver::Proto::CharAnimControllerComponent::~CharAnimControllerComponent
          (CharAnimControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e61f0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


