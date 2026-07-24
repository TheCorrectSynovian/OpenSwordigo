/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9c78
 * Function: Caver::Proto::MusicPlaylist::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MusicPlaylist * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::CopyFrom(Caver::Proto::MusicPlaylist const&) */

void __thiscall Caver::Proto::MusicPlaylist::CopyFrom(MusicPlaylist *this,MusicPlaylist *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


