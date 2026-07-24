/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033ccb0
 * Function: Caver::TextBubbleComponent::TextBubbleComponent
 * Signature: undefined __thiscall TextBubbleComponent(TextBubbleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::TextBubbleComponent() */

void __thiscall Caver::TextBubbleComponent::TextBubbleComponent(TextBubbleComponent *this)

{
  undefined *puVar1;
  
  OverlayComponent::OverlayComponent((OverlayComponent *)this);
  puVar1 = PTR_vtable_007e7758;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x76] = (TextBubbleComponent)0x0;
  *(undefined2 *)(this + 0x74) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar1 + 0x170;
  *(undefined **)(this + 0x10) = puVar1 + 0x130;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


