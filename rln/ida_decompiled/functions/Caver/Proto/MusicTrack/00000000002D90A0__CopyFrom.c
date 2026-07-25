/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D90A0
 * Mangled: _ZN5Caver5Proto10MusicTrack8CopyFromERKS1_
 * Demangled: Caver::Proto::MusicTrack::CopyFrom(Caver::Proto::MusicTrack const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202670  Caver::Proto::MusicTrack::MergeFrom(Caver::Proto::MusicTrack const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D90B4 string=0x00000000002D90B8 "@"
 *   insn=0x00000000002D90C0 string=0x00000000002D90C4 ""
 *   insn=0x00000000002D90D8 string=0x00000000002D90DC "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MusicTrack::CopyFrom(Caver::Proto::MusicTrack *this, const Caver::Proto::MusicTrack *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MusicTrack *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MusicTrack::MergeFrom();
  }
}

