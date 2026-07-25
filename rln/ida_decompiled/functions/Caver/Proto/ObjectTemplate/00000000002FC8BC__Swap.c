/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC8BC
 * Mangled: _ZN5Caver5Proto14ObjectTemplate4SwapEPS1_
 * Demangled: Caver::Proto::ObjectTemplate::Swap(Caver::Proto::ObjectTemplate*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000002FC8C0 string=0x00000000002FC8C4 "(@"
 *   insn=0x00000000002FC8C4 string=0x00000000002FC8C8 "\t@"
 *   insn=0x00000000002FC8C8 string=0x00000000002FC8CC ""
 *   insn=0x00000000002FC8CC string=0x00000000002FC8D0 ")"
 *   insn=0x00000000002FC8D0 string=0x00000000002FC8D4 "("
 *   insn=0x00000000002FC8D4 string=0x00000000002FC8D8 "\t"
 *   insn=0x00000000002FC8D8 string=0x00000000002FC8DC ""
 *   insn=0x00000000002FC8DC string=0x00000000002FC8E0 ")"
 *   insn=0x00000000002FC8E0 string=0x00000000002FC8E4 "(@"
 *   insn=0x00000000002FC8E4 string=0x00000000002FC8E8 "\t@"
 *   insn=0x00000000002FC8E8 string=0x00000000002FC8EC ""
 *   insn=0x00000000002FC8EC string=0x00000000002FC8F0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::Swap(__int64 this, Caver::Proto::ObjectTemplate *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::ObjectTemplate *)this )
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

