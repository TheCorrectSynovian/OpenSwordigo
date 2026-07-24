/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d90a0
 * Function: Caver::Proto::MusicTrack::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MusicTrack * this, MusicTrack * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::CopyFrom(Caver::Proto::MusicTrack const&) */

void __thiscall Caver::Proto::MusicTrack::CopyFrom(MusicTrack *this,MusicTrack *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


