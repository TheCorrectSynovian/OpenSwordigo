/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3288
 * Function: Caver::FireEmitterComponent::Clone
 * Signature: undefined __thiscall Clone(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::Clone() const */

FireEmitterComponent * __thiscall Caver::FireEmitterComponent::Clone(FireEmitterComponent *this)

{
  FireEmitterComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0xf0);
  FireEmitterComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this_00 + 0xb4) = *(undefined4 *)(this + 0xb4);
  *(undefined4 *)(this_00 + 0xb8) = *(undefined4 *)(this + 0xb8);
  *(undefined4 *)(this_00 + 0xbc) = *(undefined4 *)(this + 0xbc);
  uVar1 = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(this_00 + 200) = *(undefined8 *)(this + 200);
  *(undefined8 *)(this_00 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xa0);
  *(undefined8 *)(this_00 + 0xa8) = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(this_00 + 0xa0) = uVar1;
  *(undefined4 *)(this_00 + 0xb0) = *(undefined4 *)(this + 0xb0);
  return this_00;
}


