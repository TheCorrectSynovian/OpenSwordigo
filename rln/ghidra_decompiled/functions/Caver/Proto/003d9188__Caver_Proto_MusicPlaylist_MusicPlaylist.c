/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9188
 * Function: Caver::Proto::MusicPlaylist::MusicPlaylist
 * Signature: undefined __thiscall MusicPlaylist(MusicPlaylist * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::MusicPlaylist() */

void __thiscall Caver::Proto::MusicPlaylist::MusicPlaylist(MusicPlaylist *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5468;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x10) = PTR__default_name__007e5710;
  *(MusicPlaylist **)(this + 0x18) = this + 0x30;
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


