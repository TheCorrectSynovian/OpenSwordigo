/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e33c8
 * Function: Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject
 * Signature: undefined __thiscall GuideTarget_LevelObject(GuideTarget_LevelObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject() */

void __thiscall
Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(GuideTarget_LevelObject *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_vtable_007e53b0;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_object_identifier__007e7308;
  puVar2 = PTR__default_level_name__007e6158;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


