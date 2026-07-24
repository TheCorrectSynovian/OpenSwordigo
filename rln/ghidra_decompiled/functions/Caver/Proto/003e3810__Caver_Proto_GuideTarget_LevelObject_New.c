/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3810
 * Function: Caver::Proto::GuideTarget_LevelObject::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::New() const */

void Caver::Proto::GuideTarget_LevelObject::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x28);
  puVar1 = PTR_vtable_007e53b0;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar3 = PTR__default_object_identifier__007e7308;
  puVar2 = PTR__default_level_name__007e6158;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[3] = (long)puVar3;
  plVar4[2] = (long)puVar2;
  *(undefined4 *)(plVar4 + 4) = 0;
  return;
}


