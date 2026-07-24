/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415410
 * Function: Caver::Proto::ElevatorControllerComponent::~ElevatorControllerComponent
 * Signature: undefined __thiscall ~ElevatorControllerComponent(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::~ElevatorControllerComponent() */

void __thiscall
Caver::Proto::ElevatorControllerComponent::~ElevatorControllerComponent
          (ElevatorControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4a50 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


