/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3734
 * Function: Caver::DoorControllerComponent::Clone
 * Signature: undefined __thiscall Clone(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::Clone() const */

DoorControllerComponent * __thiscall
Caver::DoorControllerComponent::Clone(DoorControllerComponent *this)

{
  DoorControllerComponent *this_00;
  
  this_00 = operator_new(0xd8);
  DoorControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(this + 0xc0);
  this_00[0xd0] = this[0xd0];
  return this_00;
}


