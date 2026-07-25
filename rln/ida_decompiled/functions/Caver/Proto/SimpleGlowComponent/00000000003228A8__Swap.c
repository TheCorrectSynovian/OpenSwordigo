/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003228A8
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent4SwapEPS1_
 * Demangled: Caver::Proto::SimpleGlowComponent::Swap(Caver::Proto::SimpleGlowComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x00000000003228AC string=0x00000000003228B0 "(@"
 *   insn=0x00000000003228B0 string=0x00000000003228B4 "\t@"
 *   insn=0x00000000003228B4 string=0x00000000003228B8 ""
 *   insn=0x00000000003228B8 string=0x00000000003228BC ")"
 *   insn=0x00000000003228BC string=0x00000000003228C0 "("
 *   insn=0x00000000003228C0 string=0x00000000003228C4 "\t"
 *   insn=0x00000000003228C4 string=0x00000000003228C8 ""
 *   insn=0x00000000003228C8 string=0x00000000003228CC ")"
 *   insn=0x00000000003228CC string=0x00000000003228D0 "( @"
 *   insn=0x00000000003228D0 string=0x00000000003228D4 "\t @"
 *   insn=0x00000000003228D4 string=0x00000000003228D8 " "
 *   insn=0x00000000003228D8 string=0x00000000003228DC ") "
 *   insn=0x00000000003228DC string=0x00000000003228E0 "("
 *   insn=0x00000000003228E0 string=0x00000000003228E4 "\t"
 *   insn=0x00000000003228E4 string=0x00000000003228E8 ""
 *   insn=0x00000000003228E8 string=0x00000000003228EC ")"
 *   insn=0x00000000003228EC string=0x00000000003228F0 "(0@"
 *   insn=0x00000000003228F0 string=0x00000000003228F4 "\t0@"
 *   insn=0x00000000003228F4 string=0x00000000003228F8 "0"
 *   insn=0x00000000003228F8 string=0x00000000003228FC ")0"
 *   insn=0x00000000003228FC string=0x0000000000322900 "(@C"
 *   insn=0x0000000000322900 string=0x0000000000322904 "\t@C"
 *   insn=0x0000000000322904 string=0x0000000000322908 "@"
 *   insn=0x0000000000322908 string=0x000000000032290C ")@"
 *   insn=0x000000000032290C string=0x0000000000322910 "(@"
 *   insn=0x0000000000322910 string=0x0000000000322914 "\t@"
 *   insn=0x0000000000322914 string=0x0000000000322918 ""
 *   insn=0x0000000000322918 string=0x000000000032291C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::Swap(__int64 this, Caver::Proto::SimpleGlowComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::SimpleGlowComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v3;
    v4 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v4;
    v5 = *(_QWORD *)(this + 52);
    *(_QWORD *)(this + 52) = *(_QWORD *)((char *)a2 + 52);
    *(_QWORD *)((char *)a2 + 52) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

