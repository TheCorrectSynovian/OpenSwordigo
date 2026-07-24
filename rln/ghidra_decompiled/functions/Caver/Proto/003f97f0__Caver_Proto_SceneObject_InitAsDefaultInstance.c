/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f97f0
 * Function: Caver::Proto::SceneObject::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::InitAsDefaultInstance() */

void __thiscall Caver::Proto::SceneObject::InitAsDefaultInstance(SceneObject *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = Rectangle::default_instance();
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x80) = uVar1;
  return;
}


