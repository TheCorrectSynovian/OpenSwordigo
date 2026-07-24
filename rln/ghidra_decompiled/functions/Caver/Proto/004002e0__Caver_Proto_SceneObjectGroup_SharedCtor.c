/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004002e0
 * Function: Caver::Proto::SceneObjectGroup::SharedCtor
 * Signature: undefined __thiscall SharedCtor(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::SharedCtor() */

void __thiscall Caver::Proto::SceneObjectGroup::SharedCtor(SceneObjectGroup *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_identifier__007e5218;
  *(undefined2 *)(this + 0x50) = 0;
  this[0x52] = (SceneObjectGroup)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


