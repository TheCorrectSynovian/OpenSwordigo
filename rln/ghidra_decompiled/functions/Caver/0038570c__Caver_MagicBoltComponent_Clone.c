/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038570c
 * Function: Caver::MagicBoltComponent::Clone
 * Signature: undefined __thiscall Clone(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::Clone() const */

MagicBoltComponent * __thiscall Caver::MagicBoltComponent::Clone(MagicBoltComponent *this)

{
  MagicBoltComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x138);
  MagicBoltComponent(this_00);
  SpellComponent::InitWithComponent((SpellComponent *)this_00,(SpellComponent *)this);
  *(undefined4 *)(this_00 + 200) = *(undefined4 *)(this + 200);
  *(undefined4 *)(this_00 + 0xe0) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(this_00 + 0xf8) = *(undefined4 *)(this + 0xf8);
  uVar1 = *(undefined8 *)(this + 0x108);
  *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this + 0x110);
  *(undefined8 *)(this_00 + 0x108) = uVar1;
  *(undefined4 *)(this_00 + 0x118) = *(undefined4 *)(this + 0x118);
  return this_00;
}


