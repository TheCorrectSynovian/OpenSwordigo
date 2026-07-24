/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8938
 * Function: Caver::Proto::MusicTrack::MusicTrack
 * Signature: undefined __thiscall MusicTrack(MusicTrack * this, MusicTrack * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::MusicTrack(Caver::Proto::MusicTrack const&) */

void __thiscall Caver::Proto::MusicTrack::MusicTrack(MusicTrack *this,MusicTrack *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e54f8;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_resource_name__007e7358;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0x3f800000;
  MergeFrom(this,param_1);
  return;
}


