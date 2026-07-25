/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8D84
 * Mangled: _ZNK5Caver5Proto10MusicTrack3NewEv
 * Demangled: Caver::Proto::MusicTrack::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000002D8D90 string=0x00000000002D8D94 "h "
 *   insn=0x00000000002D8D90 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D8D94 string=0x00000000002D8D98 "}B"
 *   insn=0x00000000002D8D9C string=0x00000000002D8DA0 "i "
 *   insn=0x00000000002D8DA0 string=0x00000000002D8DA4 ")"
 *   insn=0x00000000002D8DA8 string=0x00000000002D8DAC "A"
 *   insn=0x00000000002D8DAC string=0x00000000002D8DB0 ""
 *   insn=0x00000000002D8DB0 string=0x00000000002D8DB4 "\t("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::New(Caver::Proto::MusicTrack *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C6200;
  *(_QWORD *)(result + 16) = &Caver::Proto::MusicTrack::_default_resource_name_;
  *(_QWORD *)(result + 24) = 1065353216;
  return result;
}

