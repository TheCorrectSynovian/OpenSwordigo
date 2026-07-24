/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426868
 * Function: Caver::Proto::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent
 * Signature: undefined __thiscall ~LeapingMonsterControllerComponent(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent() */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent
          (LeapingMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5350 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


