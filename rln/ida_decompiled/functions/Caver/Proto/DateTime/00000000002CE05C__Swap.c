/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE05C
 * Mangled: _ZN5Caver5Proto8DateTime4SwapEPS1_
 * Demangled: Caver::Proto::DateTime::Swap(Caver::Proto::DateTime*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000002CE060 string=0x00000000002CE064 "(@"
 *   insn=0x00000000002CE064 string=0x00000000002CE068 "\t@"
 *   insn=0x00000000002CE068 string=0x00000000002CE06C ""
 *   insn=0x00000000002CE06C string=0x00000000002CE070 ")"
 *   insn=0x00000000002CE070 string=0x00000000002CE074 "("
 *   insn=0x00000000002CE074 string=0x00000000002CE078 "\t"
 *   insn=0x00000000002CE078 string=0x00000000002CE07C ""
 *   insn=0x00000000002CE07C string=0x00000000002CE080 ")"
 *   insn=0x00000000002CE080 string=0x00000000002CE084 "(@"
 *   insn=0x00000000002CE084 string=0x00000000002CE088 "\t@"
 *   insn=0x00000000002CE088 string=0x00000000002CE08C ""
 *   insn=0x00000000002CE08C string=0x00000000002CE090 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::Swap(__int64 this, Caver::Proto::DateTime *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::DateTime *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

