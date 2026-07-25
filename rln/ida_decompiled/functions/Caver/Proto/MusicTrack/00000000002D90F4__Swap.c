/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D90F4
 * Mangled: _ZN5Caver5Proto10MusicTrack4SwapEPS1_
 * Demangled: Caver::Proto::MusicTrack::Swap(Caver::Proto::MusicTrack*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000002D90F8 string=0x00000000002D90FC "(@"
 *   insn=0x00000000002D90FC string=0x00000000002D9100 "\t@"
 *   insn=0x00000000002D9100 string=0x00000000002D9104 ""
 *   insn=0x00000000002D9104 string=0x00000000002D9108 ")"
 *   insn=0x00000000002D9108 string=0x00000000002D910C "("
 *   insn=0x00000000002D910C string=0x00000000002D9110 "\t"
 *   insn=0x00000000002D9110 string=0x00000000002D9114 ""
 *   insn=0x00000000002D9114 string=0x00000000002D9118 ")"
 *   insn=0x00000000002D9118 string=0x00000000002D911C "(@"
 *   insn=0x00000000002D911C string=0x00000000002D9120 "\t@"
 *   insn=0x00000000002D9120 string=0x00000000002D9124 ""
 *   insn=0x00000000002D9124 string=0x00000000002D9128 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::Swap(__int64 this, Caver::Proto::MusicTrack *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::MusicTrack *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

