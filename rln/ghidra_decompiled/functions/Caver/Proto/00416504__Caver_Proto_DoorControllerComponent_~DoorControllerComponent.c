/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416504
 * Function: Caver::Proto::DoorControllerComponent::~DoorControllerComponent
 * Signature: undefined __thiscall ~DoorControllerComponent(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::~DoorControllerComponent() */

void __thiscall
Caver::Proto::DoorControllerComponent::~DoorControllerComponent(DoorControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7608 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


