/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3a90
 * Function: Caver::ElevatorControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ElevatorControllerComponent * this, ElevatorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::InitWithComponent(Caver::ElevatorControllerComponent const*)
    */

void __thiscall
Caver::ElevatorControllerComponent::InitWithComponent
          (ElevatorControllerComponent *this,ElevatorControllerComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  return;
}


