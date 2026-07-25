/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8920
 * Mangled: _ZN5Caver5Proto10MusicTrack10SharedCtorEv
 * Demangled: Caver::Proto::MusicTrack::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002D8920 string=0x00000000002D8924 "h "
 *   insn=0x00000000002D8924 string=0x00000000002D8928 ""
 *   insn=0x00000000002D892C string=0x00000000002D8930 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::MusicTrack::_default_resource_name_;
  *(_QWORD *)(this + 24) = 1065353216;
  return this;
}

