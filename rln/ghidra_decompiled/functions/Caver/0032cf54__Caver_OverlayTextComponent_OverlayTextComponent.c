/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032cf54
 * Function: Caver::OverlayTextComponent::OverlayTextComponent
 * Signature: undefined __thiscall OverlayTextComponent(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::OverlayTextComponent() */

void __thiscall Caver::OverlayTextComponent::OverlayTextComponent(OverlayTextComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  OverlayComponent::OverlayComponent((OverlayComponent *)this);
  puVar1 = PTR_vtable_007e5598;
  *(undefined2 *)(this + 0x80) = 1;
  this[0xa8] = (OverlayTextComponent)0x1;
  *(undefined4 *)(this + 0xac) = 0x3f800000;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined **)this = puVar1 + 0x10;
  puVar2 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0xb0] = (OverlayTextComponent)0x0;
  *(undefined **)(this + 0x70) = puVar2 + 0x18;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x90) = puVar2 + 0x18;
  *(undefined **)(this + 0x18) = puVar1 + 0x170;
  *(undefined **)(this + 0x10) = puVar1 + 0x130;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  return;
}


