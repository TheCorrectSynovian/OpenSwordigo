/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036e374
 * Function: Caver::EntityControllerComponent::Clone
 * Signature: undefined __thiscall Clone(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::Clone() const */

EntityControllerComponent * __thiscall
Caver::EntityControllerComponent::Clone(EntityControllerComponent *this)

{
  EntityControllerComponent *this_00;
  
  this_00 = operator_new(0x150);
  EntityControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(this + 0xc0);
  *(undefined8 *)(this_00 + 0xe0) = *(undefined8 *)(this + 0xe0);
  *(undefined4 *)(this_00 + 0xe8) = *(undefined4 *)(this + 0xe8);
  *(undefined4 *)(this_00 + 0xf8) = *(undefined4 *)(this + 0xf8);
  return this_00;
}


