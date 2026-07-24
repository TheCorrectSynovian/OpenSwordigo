/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9630
 * Function: Caver::Proto::MusicPlaylist::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::New() const */

void Caver::Proto::MusicPlaylist::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x58);
  puVar1 = PTR_vtable_007e5468;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = (long)PTR__default_name__007e5710;
  plVar2[3] = (long)(plVar2 + 6);
  *(undefined4 *)(plVar2 + 5) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 10) = 0;
  return;
}


