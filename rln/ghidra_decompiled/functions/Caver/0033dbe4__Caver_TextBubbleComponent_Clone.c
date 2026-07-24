/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033dbe4
 * Function: Caver::TextBubbleComponent::Clone
 * Signature: undefined __thiscall Clone(TextBubbleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::Clone() const */

OverlayComponent * __thiscall Caver::TextBubbleComponent::Clone(TextBubbleComponent *this)

{
  undefined *puVar1;
  OverlayComponent *this_00;
  
  this_00 = operator_new(0x88);
  OverlayComponent::OverlayComponent(this_00);
  puVar1 = PTR_vtable_007e7758;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  this_00[0x76] = (OverlayComponent)0x0;
  *(undefined2 *)(this_00 + 0x74) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined4 *)(this_00 + 0x70) = 0;
  *(undefined **)(this_00 + 0x18) = puVar1 + 0x170;
  *(undefined **)(this_00 + 0x10) = puVar1 + 0x130;
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  return this_00;
}


