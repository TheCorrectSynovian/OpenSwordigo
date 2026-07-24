/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031779c
 * Function: Caver::CollisionShapeComponent::CollisionShapeComponent
 * Signature: undefined __thiscall CollisionShapeComponent(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::CollisionShapeComponent() */

void __thiscall
Caver::CollisionShapeComponent::CollisionShapeComponent(CollisionShapeComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  ShapeComponent::ShapeComponent((ShapeComponent *)this);
  puVar2 = PTR_DAT_007e5de8;
  puVar4 = PTR_vtable_007e4b78;
  puVar1 = PTR_vtable_007e4b78 + 0x150;
  *(undefined **)(this + 0x18) = PTR_vtable_007e4b78 + 400;
  *(undefined **)(this + 0x10) = puVar1;
  uVar3 = DAT_00683950;
  puVar2 = puVar2 + 0x18;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined **)(this + 0x90) = puVar2;
  *(undefined **)(this + 0xb8) = puVar2;
  *(undefined **)(this + 0xe0) = puVar2;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 300) = 0x3f800000;
  this[0x130] = (CollisionShapeComponent)0x0;
  *(undefined8 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x150) = uVar3;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  this[0x178] = (CollisionShapeComponent)0x1;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x179) = 0;
  *(undefined4 *)(this + 0x184) = 0x3f800000;
  this[0x17d] = (CollisionShapeComponent)0x0;
  this[0x188] = (CollisionShapeComponent)0x0;
  *(undefined8 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  this[0x1a0] = (CollisionShapeComponent)0x0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1c0] = (CollisionShapeComponent)0x0;
  this[0x1cc] = (CollisionShapeComponent)0x0;
  *(undefined8 *)(this + 0x1c4) = 0;
  *(CollisionShapeComponent **)(this + 0x198) = this;
  return;
}


