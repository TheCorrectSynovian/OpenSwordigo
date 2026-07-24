/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004153f8
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
                    /* catch() { ... } // from try @ 0041539c with catch @ 00415404 */
  *(undefined **)this = PTR_vtable_007e4a50 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


