/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431030
 * Function: Caver::Proto::OverlayTextComponent::OverlayTextComponent
 * Signature: undefined __thiscall OverlayTextComponent(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::OverlayTextComponent() */

void __thiscall Caver::Proto::OverlayTextComponent::OverlayTextComponent(OverlayTextComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_007e7bd8;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_sprite_name__007e6978;
  puVar1 = PTR__default_text__007e5e10;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


