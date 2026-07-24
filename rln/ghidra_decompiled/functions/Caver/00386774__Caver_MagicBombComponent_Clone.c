/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00386774
 * Function: Caver::MagicBombComponent::Clone
 * Signature: undefined __thiscall Clone(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicBombComponent::Clone() const */

SpellComponent * __thiscall Caver::MagicBombComponent::Clone(MagicBombComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  SpellComponent *this_00;
  undefined1 auVar3 [16];
  
  this_00 = operator_new(0xf0);
  SpellComponent::SpellComponent(this_00);
  puVar2 = PTR_vtable_007e6988;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(long *)(this_00 + 0xd8) = auVar3._8_8_;
  *(long *)(this_00 + 0xd0) = auVar3._0_8_;
  *(undefined **)(this_00 + 0x18) = puVar2 + 0x188;
  *(undefined **)(this_00 + 0x10) = puVar2 + 0x148;
  uVar1 = _DAT_00688bb0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined4 *)(this_00 + 0xe0) = 0;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined8 *)(this_00 + 0xbc) = uVar1;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  SpellComponent::InitWithComponent(this_00,(SpellComponent *)this);
  uVar1 = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(this_00 + 0xd8) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this_00 + 0xd0) = uVar1;
  return this_00;
}


