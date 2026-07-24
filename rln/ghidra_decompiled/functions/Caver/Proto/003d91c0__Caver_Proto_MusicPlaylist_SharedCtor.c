/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d91c0
 * Function: Caver::Proto::MusicPlaylist::SharedCtor
 * Signature: undefined __thiscall SharedCtor(MusicPlaylist * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::SharedCtor() */

void __thiscall Caver::Proto::MusicPlaylist::SharedCtor(MusicPlaylist *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_name__007e5710;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


