/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cbff8
 * Function: Caver::WeaponGlowComponent::Clone
 * Signature: undefined __thiscall Clone(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::Clone() const */

WeaponGlowComponent * __thiscall Caver::WeaponGlowComponent::Clone(WeaponGlowComponent *this)

{
  WeaponGlowComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0xf8);
  WeaponGlowComponent(this_00);
  GlowComponent::InitWithComponent((GlowComponent *)this_00,(GlowComponent *)this);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  uVar1 = *(undefined8 *)(this + 0xa4);
  *(undefined8 *)(this_00 + 0xac) = *(undefined8 *)(this + 0xac);
  *(undefined8 *)(this_00 + 0xa4) = uVar1;
  *(undefined4 *)(this_00 + 0xb4) = *(undefined4 *)(this + 0xb4);
  *(undefined4 *)(this_00 + 0xf4) = *(undefined4 *)(this + 0xf4);
  return this_00;
}


