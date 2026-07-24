/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056ed60
 * Function: Caver::SceneObject::SceneObject
 * Signature: undefined __thiscall SceneObject(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SceneObject() */

void __thiscall Caver::SceneObject::SceneObject(SceneObject *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR_vtable_007e56a0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined2 *)(this + 0x18) = 1;
  this[0xf3] = (SceneObject)0x1;
  this[0x44] = (SceneObject)0x0;
  *(undefined **)this = puVar2 + 0x10;
  uVar3 = NEON_fmov(0x3f800000,4);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)(this + 0x10) = puVar2 + 0x70;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined **)(this + 0x50) = puVar1;
  *(undefined8 *)(this + 0x88) = uVar3;
  uVar4 = NEON_fmov(0xc1200000,4);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xa4) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  uVar3 = NEON_fmov(0x41a00000,4);
  this[0x90] = (SceneObject)0x0;
  this[0xb4] = (SceneObject)0x0;
  this[0xe8] = (SceneObject)0x0;
  this[0xf2] = (SceneObject)0x0;
  *(undefined2 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xf4] = (SceneObject)0x0;
  *(undefined8 *)(this + 0x10c) = 0;
  *(undefined8 *)(this + 0x114) = 0;
  this[0x108] = (SceneObject)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x94) = uVar4;
  *(undefined8 *)(this + 0x9c) = uVar3;
  *(SceneObject **)(this + 0x100) = this;
  return;
}


