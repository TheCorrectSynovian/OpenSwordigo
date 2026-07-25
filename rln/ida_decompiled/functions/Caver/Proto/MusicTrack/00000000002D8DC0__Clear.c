/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8DC0
 * Mangled: _ZN5Caver5Proto10MusicTrack5ClearEv
 * Demangled: Caver::Proto::MusicTrack::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x00000000002D8DCC string=0x00000000002D8DD0 "hr@9"
 *   insn=0x00000000002D8DD4 string=0x00000000002D8DD8 "h"
 *   insn=0x00000000002D8DD8 string=0x00000000002D8DDC "h "
 *   insn=0x00000000002D8DDC string=0x00000000002D8DE0 "`\n@"
 *   insn=0x00000000002D8DE0 string=0x00000000002D8DE4 ""
 *   insn=0x00000000002D8DEC string=0x00000000002D8DF0 ""
 *   insn=0x00000000002D8E04 string=0x00000000002D8E08 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::MusicTrack::_default_resource_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_DWORD *)(v1 + 24) = 1065353216;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}

