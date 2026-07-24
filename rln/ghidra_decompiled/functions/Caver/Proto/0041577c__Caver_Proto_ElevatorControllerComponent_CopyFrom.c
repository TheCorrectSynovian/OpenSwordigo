/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041577c
 * Function: Caver::Proto::ElevatorControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ElevatorControllerComponent * this, ElevatorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::CopyFrom(Caver::Proto::ElevatorControllerComponent
   const&) */

void __thiscall
Caver::Proto::ElevatorControllerComponent::CopyFrom
          (ElevatorControllerComponent *this,ElevatorControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


