/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382fd8
 * Function: Caver::FireBreathComponent::Clone
 * Signature: undefined __thiscall Clone(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::Clone() const */

FireBreathComponent * __thiscall Caver::FireBreathComponent::Clone(FireBreathComponent *this)

{
  FireBreathComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x108);
  FireBreathComponent(this_00);
  SpellComponent::InitWithComponent((SpellComponent *)this_00,(SpellComponent *)this);
  *(undefined4 *)(this_00 + 200) = *(undefined4 *)(this + 200);
  *(undefined4 *)(this_00 + 0xe0) = *(undefined4 *)(this + 0xe0);
  uVar1 = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(this_00 + 0xf8) = *(undefined8 *)(this + 0xf8);
  *(undefined8 *)(this_00 + 0xf0) = uVar1;
  return this_00;
}


