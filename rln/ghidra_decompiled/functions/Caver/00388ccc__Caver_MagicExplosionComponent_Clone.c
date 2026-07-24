/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00388ccc
 * Function: Caver::MagicExplosionComponent::Clone
 * Signature: undefined __thiscall Clone(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::Clone() const */

MagicExplosionComponent * __thiscall
Caver::MagicExplosionComponent::Clone(MagicExplosionComponent *this)

{
  MagicExplosionComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x188);
  MagicExplosionComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  uVar1 = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)(this_00 + 0xb8) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this_00 + 0xb0) = uVar1;
  *(undefined8 *)(this_00 + 0xe0) = *(undefined8 *)(this + 0xe0);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  return this_00;
}


