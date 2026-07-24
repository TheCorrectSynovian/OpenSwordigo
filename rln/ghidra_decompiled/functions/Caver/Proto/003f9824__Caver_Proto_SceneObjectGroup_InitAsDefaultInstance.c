/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9824
 * Function: Caver::Proto::SceneObjectGroup::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::InitAsDefaultInstance() */

void __thiscall Caver::Proto::SceneObjectGroup::InitAsDefaultInstance(SceneObjectGroup *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x58) = uVar1;
  return;
}


