/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3400
 * Function: Caver::Proto::GuideTarget_LevelObject::SharedCtor
 * Signature: undefined __thiscall SharedCtor(GuideTarget_LevelObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::SharedCtor() */

void __thiscall Caver::Proto::GuideTarget_LevelObject::SharedCtor(GuideTarget_LevelObject *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_object_identifier__007e7308;
  puVar1 = PTR__default_level_name__007e6158;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


