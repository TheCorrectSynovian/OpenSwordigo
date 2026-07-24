/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038b41c
 * Function: Caver::MagicHookshotComponent::Clone
 * Signature: undefined __thiscall Clone(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::Clone() const */

MagicHookshotComponent * __thiscall
Caver::MagicHookshotComponent::Clone(MagicHookshotComponent *this)

{
  MagicHookshotComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x170);
  MagicHookshotComponent(this_00);
  SpellComponent::InitWithComponent((SpellComponent *)this_00,(SpellComponent *)this);
  *(undefined4 *)(this_00 + 200) = *(undefined4 *)(this + 200);
  *(undefined4 *)(this_00 + 0xe0) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(this_00 + 0xf8) = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)(this_00 + 0x110) = *(undefined4 *)(this + 0x110);
  uVar1 = *(undefined8 *)(this + 0x128);
  *(undefined8 *)(this_00 + 0x130) = *(undefined8 *)(this + 0x130);
  *(undefined8 *)(this_00 + 0x128) = uVar1;
  return this_00;
}


