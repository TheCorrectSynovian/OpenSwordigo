/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032caec
 * Function: Caver::OverlayTargetArrowComponent::Clone
 * Signature: undefined __thiscall Clone(OverlayTargetArrowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::Clone() const */

OverlayComponent * __thiscall
Caver::OverlayTargetArrowComponent::Clone(OverlayTargetArrowComponent *this)

{
  undefined *puVar1;
  OverlayComponent *this_00;
  
  this_00 = operator_new(0xb8);
  OverlayComponent::OverlayComponent(this_00);
  puVar1 = PTR_vtable_007e6cd8;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  this_00[0x9a] = (OverlayComponent)0x0;
  *(undefined2 *)(this_00 + 0x98) = 0;
  *(undefined **)(this_00 + 0x18) = puVar1 + 0x170;
  *(undefined **)(this_00 + 0x10) = puVar1 + 0x130;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  OverlayComponent::InitWithComponent(this_00,(OverlayComponent *)this);
  return this_00;
}


