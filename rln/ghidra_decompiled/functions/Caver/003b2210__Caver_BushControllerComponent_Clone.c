/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2210
 * Function: Caver::BushControllerComponent::Clone
 * Signature: undefined __thiscall Clone(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::Clone() const */

BushControllerComponent * __thiscall
Caver::BushControllerComponent::Clone(BushControllerComponent *this)

{
  BushControllerComponent *this_00;
  
  this_00 = operator_new(0xc0);
  BushControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
  return this_00;
}


