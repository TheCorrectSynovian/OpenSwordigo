/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041651c
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
                    /* catch() { ... } // from try @ 004162cc with catch @ 0041653c */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


