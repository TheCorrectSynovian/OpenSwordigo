/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b1148
 * Function: Caver::SimpleGlowComponent::Clone
 * Signature: undefined __thiscall Clone(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SimpleGlowComponent::Clone() const */

GlowComponent * __thiscall Caver::SimpleGlowComponent::Clone(SimpleGlowComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  GlowComponent *this_00;
  undefined8 uVar3;
  
  this_00 = operator_new(0xe0);
  GlowComponent::GlowComponent(this_00);
  puVar2 = PTR_vtable_007e6ac0;
  *(undefined8 *)(this_00 + 0xac) = 0x3f0000003f000000;
  *(undefined8 *)(this_00 + 0xa4) = 0x3f0000003f000000;
  *(undefined **)(this_00 + 0x18) = puVar2 + 0x178;
  *(undefined **)(this_00 + 0x10) = puVar2 + 0x138;
  uVar1 = _UNK_00689a68;
  uVar3 = _DAT_00689a60;
  *(undefined8 *)(this_00 + 0xb4) = 0xa41a00000;
  *(undefined8 *)(this_00 + 0xc4) = uVar1;
  *(undefined8 *)(this_00 + 0xbc) = uVar3;
  uVar1 = _UNK_00689a78;
  uVar3 = _DAT_00689a70;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined4 *)(this_00 + 0xcc) = 0x3e19999a;
  *(undefined **)this_00 = puVar2 + 0x10;
  *(undefined8 *)(this_00 + 0xd8) = uVar1;
  *(undefined8 *)(this_00 + 0xd0) = uVar3;
  GlowComponent::InitWithComponent(this_00,(GlowComponent *)this);
  uVar3 = *(undefined8 *)(this + 0xa4);
  *(undefined8 *)(this_00 + 0xac) = *(undefined8 *)(this + 0xac);
  *(undefined8 *)(this_00 + 0xa4) = uVar3;
  *(undefined4 *)(this_00 + 0xc4) = *(undefined4 *)(this + 0xc4);
  uVar3 = *(undefined8 *)(this + 0xb4);
  *(undefined8 *)(this_00 + 0xbc) = *(undefined8 *)(this + 0xbc);
  *(undefined8 *)(this_00 + 0xb4) = uVar3;
  *(undefined8 *)(this_00 + 0xcc) = *(undefined8 *)(this + 0xcc);
  return this_00;
}


