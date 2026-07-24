/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b8e4
 * Function: Caver::OverlayComponent::OverlayComponent
 * Signature: undefined __thiscall OverlayComponent(OverlayComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayComponent::OverlayComponent() */

void __thiscall Caver::OverlayComponent::OverlayComponent(OverlayComponent *this)

{
  undefined *puVar1;
  OverlayComponent *pOVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (OverlayComponent)0x0;
  puVar1 = PTR_vtable_007e6778;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pOVar2 = this + 0x48;
  *(undefined8 *)pOVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(OverlayComponent **)(this + 0x58) = pOVar2;
  *(OverlayComponent **)(this + 0x60) = pOVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x170;
  *(undefined **)(this + 0x10) = puVar1 + 0x130;
  return;
}


