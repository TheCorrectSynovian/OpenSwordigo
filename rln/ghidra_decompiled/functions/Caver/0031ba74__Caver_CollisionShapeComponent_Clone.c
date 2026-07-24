/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ba74
 * Function: Caver::CollisionShapeComponent::Clone
 * Signature: undefined __thiscall Clone(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::Clone() const */

ShapeComponent * __thiscall Caver::CollisionShapeComponent::Clone(CollisionShapeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ShapeComponent *this_00;
  
  this_00 = operator_new(0x1d0);
  ShapeComponent::ShapeComponent(this_00);
  puVar2 = PTR_DAT_007e5de8;
  puVar4 = PTR_vtable_007e4b78;
  puVar1 = PTR_vtable_007e4b78 + 0x150;
  *(undefined **)(this_00 + 0x18) = PTR_vtable_007e4b78 + 400;
  *(undefined **)(this_00 + 0x10) = puVar1;
  uVar3 = DAT_00683950;
  puVar2 = puVar2 + 0x18;
  *(undefined **)this_00 = puVar4 + 0x10;
  *(undefined **)(this_00 + 0x90) = puVar2;
  *(undefined **)(this_00 + 0xb8) = puVar2;
  *(undefined **)(this_00 + 0xe0) = puVar2;
  *(undefined4 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x118) = 0;
  *(undefined4 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0xe8) = 0;
  *(undefined4 *)(this_00 + 300) = 0x3f800000;
  this_00[0x130] = (ShapeComponent)0x0;
  *(undefined8 *)(this_00 + 0x144) = 0;
  *(undefined8 *)(this_00 + 0x13c) = 0;
  *(undefined8 *)(this_00 + 0x150) = uVar3;
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined8 *)(this_00 + 0x158) = 0;
  this_00[0x178] = (ShapeComponent)0x1;
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined4 *)(this_00 + 0x179) = 0;
  *(undefined4 *)(this_00 + 0x184) = 0x3f800000;
  this_00[0x17d] = (ShapeComponent)0x0;
  this_00[0x188] = (ShapeComponent)0x0;
  *(undefined8 *)(this_00 + 0x1a4) = 0;
  *(undefined8 *)(this_00 + 0x1ac) = 0;
  this_00[0x1a0] = (ShapeComponent)0x0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  this_00[0x1c0] = (ShapeComponent)0x0;
  this_00[0x1cc] = (ShapeComponent)0x0;
  *(undefined8 *)(this_00 + 0x1c4) = 0;
  *(ShapeComponent **)(this_00 + 0x198) = this_00;
  InitWithComponent((CollisionShapeComponent *)this_00,this);
  return this_00;
}


