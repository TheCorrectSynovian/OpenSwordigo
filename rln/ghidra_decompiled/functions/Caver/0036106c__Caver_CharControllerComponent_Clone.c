/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036106c
 * Function: Caver::CharControllerComponent::Clone
 * Signature: undefined __thiscall Clone(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::Clone() const */

CharControllerComponent * __thiscall
Caver::CharControllerComponent::Clone(CharControllerComponent *this)

{
  CharControllerComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x308);
  CharControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this_00 + 0x108) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(this_00 + 0x120) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this_00 + 0x138) = *(undefined4 *)(this + 0x138);
  *(undefined4 *)(this_00 + 0x150) = *(undefined4 *)(this + 0x150);
  *(undefined4 *)(this_00 + 0x168) = *(undefined4 *)(this + 0x168);
  *(undefined4 *)(this_00 + 0x180) = *(undefined4 *)(this + 0x180);
  *(undefined4 *)(this_00 + 0x1a0) = *(undefined4 *)(this + 0x1a0);
  *(undefined4 *)(this_00 + 0x1b8) = *(undefined4 *)(this + 0x1b8);
  *(undefined4 *)(this_00 + 0x218) = *(undefined4 *)(this + 0x218);
  *(undefined4 *)(this_00 + 0x1d8) = *(undefined4 *)(this + 0x1d8);
  *(undefined4 *)(this_00 + 0x1f0) = *(undefined4 *)(this + 0x1f0);
  *(undefined4 *)(this_00 + 0x208) = *(undefined4 *)(this + 0x208);
  *(undefined4 *)(this_00 + 0x26c) = *(undefined4 *)(this + 0x26c);
  uVar1 = *(undefined8 *)(this + 0x278);
  *(undefined8 *)(this_00 + 0x280) = *(undefined8 *)(this + 0x280);
  *(undefined8 *)(this_00 + 0x278) = uVar1;
  return this_00;
}


