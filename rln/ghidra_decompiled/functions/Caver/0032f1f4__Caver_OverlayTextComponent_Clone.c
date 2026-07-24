/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032f1f4
 * Function: Caver::OverlayTextComponent::Clone
 * Signature: undefined __thiscall Clone(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::Clone() const */

OverlayComponent * __thiscall Caver::OverlayTextComponent::Clone(OverlayTextComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  OverlayComponent *this_00;
  
  this_00 = operator_new(0xd8);
  OverlayComponent::OverlayComponent(this_00);
  puVar3 = PTR_DAT_007e5de8;
  puVar1 = PTR_vtable_007e5598 + 0x130;
  puVar2 = PTR_vtable_007e5598 + 0x170;
  *(undefined **)this_00 = PTR_vtable_007e5598 + 0x10;
  *(undefined **)(this_00 + 0x18) = puVar2;
  *(undefined **)(this_00 + 0x10) = puVar1;
  *(undefined **)(this_00 + 0x70) = puVar3 + 0x18;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined2 *)(this_00 + 0x80) = 1;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined **)(this_00 + 0x90) = puVar3 + 0x18;
  this_00[0xa8] = (OverlayComponent)0x1;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined4 *)(this_00 + 0xac) = 0x3f800000;
  this_00[0xb0] = (OverlayComponent)0x0;
  *(undefined4 *)(this_00 + 0xc0) = 0xffffffff;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  OverlayComponent::InitWithComponent(this_00,(OverlayComponent *)this);
  FUN_0066a6a8(this_00 + 0x70,this + 0x70);
  *(undefined8 *)(this_00 + 0x78) = *(undefined8 *)(this + 0x78);
  FUN_0066a6a8(this_00 + 0x90,this + 0x90);
  *(undefined8 *)(this_00 + 0x98) = *(undefined8 *)(this + 0x98);
  return this_00;
}


