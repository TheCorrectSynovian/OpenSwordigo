/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004246c4
 * Function: Caver::Proto::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent
 * Signature: undefined __thiscall ~ChargingMonsterControllerComponent(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent() */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent
          (ChargingMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7130 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


