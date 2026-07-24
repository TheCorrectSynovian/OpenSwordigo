/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7a58
 * Function: Caver::Proto::SoundEffect::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::New() const */

void Caver::Proto::SoundEffect::New(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = operator_new(0x30);
  puVar2 = PTR_vtable_007e5368;
  *(undefined4 *)(plVar5 + 1) = 0;
  puVar4 = PTR__default_name__007e7200;
  puVar3 = PTR__default_resource_name__007e66e8;
  lVar1 = DAT_0068a310;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[3] = (long)puVar3;
  plVar5[2] = (long)puVar4;
  plVar5[4] = lVar1;
  *(undefined4 *)(plVar5 + 5) = 0;
  return;
}


