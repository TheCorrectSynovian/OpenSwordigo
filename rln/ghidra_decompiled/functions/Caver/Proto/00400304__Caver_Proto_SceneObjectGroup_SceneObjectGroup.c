/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400304
 * Function: Caver::Proto::SceneObjectGroup::SceneObjectGroup
 * Signature: undefined __thiscall SceneObjectGroup(SceneObjectGroup * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&) */

void __thiscall
Caver::Proto::SceneObjectGroup::SceneObjectGroup(SceneObjectGroup *this,SceneObjectGroup *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e63b0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 4;
  puVar1 = PTR__default_identifier__007e5218;
  *(undefined2 *)(this + 0x50) = 0;
  this[0x52] = (SceneObjectGroup)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(SceneObjectGroup **)(this + 0x18) = this + 0x30;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined4 *)(this + 0x60) = 0;
  MergeFrom(this,param_1);
  return;
}


