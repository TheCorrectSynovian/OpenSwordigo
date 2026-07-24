/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fe108
 * Function: Caver::Proto::SceneObject::SharedCtor
 * Signature: undefined __thiscall SharedCtor(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::SharedCtor() */

void __thiscall Caver::Proto::SceneObject::SharedCtor(SceneObject *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_identifier__007e5320;
  puVar1 = PTR__default_template_name__007e5070;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (SceneObject)0x0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}


