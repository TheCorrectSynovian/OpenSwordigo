/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003de6a4
 * Function: Caver::Proto::MapZone::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::New() const */

void Caver::Proto::MapZone::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x70);
  plVar3[4] = (long)(plVar3 + 7);
  puVar1 = PTR__default_name__007e5428;
  *(undefined4 *)(plVar3 + 6) = 4;
  plVar3[0xc] = (long)PTR__default_music__007e5568;
  puVar2 = PTR_vtable_007e7268;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  puVar2 = PTR__default_title__007e7d78;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  plVar3[3] = (long)puVar2;
  plVar3[2] = (long)puVar1;
  return;
}


