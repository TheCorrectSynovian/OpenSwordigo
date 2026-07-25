/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D010C
 * Mangled: _ZN5Caver5Proto6Circle4SwapEPS1_
 * Demangled: Caver::Proto::Circle::Swap(Caver::Proto::Circle*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000002D0110 string=0x00000000002D0114 "(@"
 *   insn=0x00000000002D0114 string=0x00000000002D0118 "\t@"
 *   insn=0x00000000002D0118 string=0x00000000002D011C ""
 *   insn=0x00000000002D011C string=0x00000000002D0120 ")"
 *   insn=0x00000000002D0120 string=0x00000000002D0124 "("
 *   insn=0x00000000002D0124 string=0x00000000002D0128 "\t"
 *   insn=0x00000000002D0128 string=0x00000000002D012C ""
 *   insn=0x00000000002D012C string=0x00000000002D0130 ")"
 *   insn=0x00000000002D0130 string=0x00000000002D0134 "(@"
 *   insn=0x00000000002D0134 string=0x00000000002D0138 "\t@"
 *   insn=0x00000000002D0138 string=0x00000000002D013C ""
 *   insn=0x00000000002D013C string=0x00000000002D0140 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::Swap(__int64 this, Caver::Proto::Circle *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::Circle *)this )
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

