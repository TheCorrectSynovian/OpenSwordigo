/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032ba58
 * Function: Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent
 * Signature: undefined __thiscall OverlayTargetArrowComponent(OverlayTargetArrowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent() */

void __thiscall
Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(OverlayTargetArrowComponent *this)

{
  undefined *puVar1;
  
  OverlayComponent::OverlayComponent((OverlayComponent *)this);
  puVar1 = PTR_vtable_007e6cd8;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)this = puVar1 + 0x10;
  this[0x9a] = (OverlayTargetArrowComponent)0x0;
  *(undefined2 *)(this + 0x98) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x170;
  *(undefined **)(this + 0x10) = puVar1 + 0x130;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  return;
}


