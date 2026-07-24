/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8d84
 * Function: Caver::Proto::MusicTrack::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::New() const */

void Caver::Proto::MusicTrack::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar1 = PTR_vtable_007e54f8;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_resource_name__007e7358;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[2] = (long)puVar2;
  plVar3[3] = 0x3f800000;
  return;
}


