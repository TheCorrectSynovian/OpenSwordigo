/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385864
 * Function: Caver::MagicBombComponent::MagicBombComponent
 * Signature: undefined __thiscall MagicBombComponent(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicBombComponent::MagicBombComponent() */

void __thiscall Caver::MagicBombComponent::MagicBombComponent(MagicBombComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  SpellComponent::SpellComponent((SpellComponent *)this);
  puVar2 = PTR_vtable_007e6988;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0xd8) = auVar3._8_8_;
  *(long *)(this + 0xd0) = auVar3._0_8_;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)(this + 0x18) = puVar2 + 0x188;
  *(undefined **)(this + 0x10) = puVar2 + 0x148;
  uVar1 = _DAT_00688bb0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0xbc) = uVar1;
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}


