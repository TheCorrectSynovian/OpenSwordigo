/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005832f8
 * Function: Caver::MusicPlaylist::MusicPlaylist
 * Signature: undefined __thiscall MusicPlaylist(MusicPlaylist * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlaylist::MusicPlaylist() */

void __thiscall Caver::MusicPlaylist::MusicPlaylist(MusicPlaylist *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 00581440 with catch @ 00583308 */
  this[8] = (MusicPlaylist)0x1;
  *(undefined **)this = puVar1 + 0x18;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


