/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b501c
 * Function: Caver::ElevatorControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::Clone() const */

ElevatorControllerComponent * __thiscall
Caver::ElevatorControllerComponent::Clone(ElevatorControllerComponent *this)

{
  ElevatorControllerComponent *this_00;
  
  this_00 = operator_new(0xd0);
  ElevatorControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x98) = *(undefined4 *)(this + 0x98);
  return this_00;
}


