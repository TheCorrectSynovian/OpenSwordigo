/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5FE0
 * Mangled: _ZN5Caver5Proto7Program4SwapEPS1_
 * Demangled: Caver::Proto::Program::Swap(Caver::Proto::Program*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000002D5FE4 string=0x00000000002D5FE8 "(@"
 *   insn=0x00000000002D5FE8 string=0x00000000002D5FEC "\t@"
 *   insn=0x00000000002D5FEC string=0x00000000002D5FF0 ""
 *   insn=0x00000000002D5FF0 string=0x00000000002D5FF4 ")"
 *   insn=0x00000000002D5FF4 string=0x00000000002D5FF8 "("
 *   insn=0x00000000002D5FF8 string=0x00000000002D5FFC "\t"
 *   insn=0x00000000002D5FFC string=0x00000000002D6000 ""
 *   insn=0x00000000002D6000 string=0x00000000002D6004 ")"
 *   insn=0x00000000002D6004 string=0x00000000002D6008 "("
 *   insn=0x00000000002D6008 string=0x00000000002D600C "\t"
 *   insn=0x00000000002D600C string=0x00000000002D6010 ""
 *   insn=0x00000000002D6010 string=0x00000000002D6014 ")"
 *   insn=0x00000000002D6014 string=0x00000000002D6018 "((@"
 *   insn=0x00000000002D6018 string=0x00000000002D601C "\t(@"
 *   insn=0x00000000002D601C string=0x00000000002D6020 "("
 *   insn=0x00000000002D6020 string=0x00000000002D6024 ")("
 *   insn=0x00000000002D6024 string=0x00000000002D6028 "(@"
 *   insn=0x00000000002D6028 string=0x00000000002D602C "\t@"
 *   insn=0x00000000002D602C string=0x00000000002D6030 ""
 *   insn=0x00000000002D6030 string=0x00000000002D6034 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Program::Swap(__int64 this, Caver::Proto::Program *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::Program *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

