/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF984
 * Mangled: _ZN5Caver5Proto3Box4SwapEPS1_
 * Demangled: Caver::Proto::Box::Swap(Caver::Proto::Box*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x00000000002CF988 string=0x00000000002CF98C "("
 *   insn=0x00000000002CF98C string=0x00000000002CF990 "\t"
 *   insn=0x00000000002CF990 string=0x00000000002CF994 ""
 *   insn=0x00000000002CF994 string=0x00000000002CF998 ")"
 *   insn=0x00000000002CF998 string=0x00000000002CF99C "("
 *   insn=0x00000000002CF99C string=0x00000000002CF9A0 "\t"
 *   insn=0x00000000002CF9A0 string=0x00000000002CF9A4 ""
 *   insn=0x00000000002CF9A4 string=0x00000000002CF9A8 ")"
 *   insn=0x00000000002CF9A8 string=0x00000000002CF9AC "("
 *   insn=0x00000000002CF9AC string=0x00000000002CF9B0 "\t"
 *   insn=0x00000000002CF9B0 string=0x00000000002CF9B4 ""
 *   insn=0x00000000002CF9B4 string=0x00000000002CF9B8 ")"
 *   insn=0x00000000002CF9B8 string=0x00000000002CF9BC "("
 *   insn=0x00000000002CF9BC string=0x00000000002CF9C0 "\t"
 *   insn=0x00000000002CF9C0 string=0x00000000002CF9C4 ""
 *   insn=0x00000000002CF9C4 string=0x00000000002CF9C8 ")"
 *   insn=0x00000000002CF9C8 string=0x00000000002CF9CC "("
 *   insn=0x00000000002CF9CC string=0x00000000002CF9D0 "\t"
 *   insn=0x00000000002CF9D0 string=0x00000000002CF9D4 ""
 *   insn=0x00000000002CF9D4 string=0x00000000002CF9D8 ")"
 *   insn=0x00000000002CF9D8 string=0x00000000002CF9DC "("
 *   insn=0x00000000002CF9DC string=0x00000000002CF9E0 "\t"
 *   insn=0x00000000002CF9E0 string=0x00000000002CF9E4 ""
 *   insn=0x00000000002CF9E4 string=0x00000000002CF9E8 ")"
 *   insn=0x00000000002CF9E8 string=0x00000000002CF9EC "(@"
 *   insn=0x00000000002CF9EC string=0x00000000002CF9F0 "\t@"
 *   insn=0x00000000002CF9F0 string=0x00000000002CF9F4 ""
 *   insn=0x00000000002CF9F4 string=0x00000000002CF9F8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::Swap(__int64 this, Caver::Proto::Box *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  __int64 v7; // x9

  if ( a2 != (Caver::Proto::Box *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v6;
    v7 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v7;
    LODWORD(v7) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

