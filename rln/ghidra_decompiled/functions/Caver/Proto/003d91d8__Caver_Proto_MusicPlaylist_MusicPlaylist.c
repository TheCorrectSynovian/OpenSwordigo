/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d91d8
 * Function: Caver::Proto::MusicPlaylist::MusicPlaylist
 * Signature: undefined __thiscall MusicPlaylist(MusicPlaylist * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist const&) */

void __thiscall
Caver::Proto::MusicPlaylist::MusicPlaylist(MusicPlaylist *this,MusicPlaylist *param_1)

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
  MergeFrom(this,param_1);
  return;
}


