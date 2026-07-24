/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fe0a4
 * Function: Caver::Proto::SceneObject::SceneObject
 * Signature: undefined __thiscall SceneObject(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::SceneObject() */

void __thiscall Caver::Proto::SceneObject::SceneObject(SceneObject *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(SceneObject **)(this + 0x20) = this + 0x38;
  puVar1 = PTR__default_template_name__007e5070;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  puVar2 = PTR_vtable_007e6240;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar2 + 0x10;
  puVar2 = PTR__default_identifier__007e5320;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (SceneObject)0x0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}


