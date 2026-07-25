/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC578
 * Mangled: _ZN5Caver5Proto14MapNode_Portal4SwapEPS1_
 * Demangled: Caver::Proto::MapNode_Portal::Swap(Caver::Proto::MapNode_Portal*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000002DC578 string=0x00000000002DC57C " "
 *   insn=0x00000000002DC57C string=0x00000000002DC580 "(@"
 *   insn=0x00000000002DC580 string=0x00000000002DC584 "\t@"
 *   insn=0x00000000002DC584 string=0x00000000002DC588 ""
 *   insn=0x00000000002DC588 string=0x00000000002DC58C ")"
 *   insn=0x00000000002DC58C string=0x00000000002DC590 "("
 *   insn=0x00000000002DC590 string=0x00000000002DC594 "\t"
 *   insn=0x00000000002DC594 string=0x00000000002DC598 ""
 *   insn=0x00000000002DC598 string=0x00000000002DC59C ")"
 *   insn=0x00000000002DC59C string=0x00000000002DC5A0 "("
 *   insn=0x00000000002DC5A0 string=0x00000000002DC5A4 "\t"
 *   insn=0x00000000002DC5A4 string=0x00000000002DC5A8 ""
 *   insn=0x00000000002DC5A8 string=0x00000000002DC5AC ")"
 *   insn=0x00000000002DC5AC string=0x00000000002DC5B0 "("
 *   insn=0x00000000002DC5B0 string=0x00000000002DC5B4 "\t"
 *   insn=0x00000000002DC5B4 string=0x00000000002DC5B8 ""
 *   insn=0x00000000002DC5B8 string=0x00000000002DC5BC ")"
 *   insn=0x00000000002DC5BC string=0x00000000002DC5C0 "($@"
 *   insn=0x00000000002DC5C0 string=0x00000000002DC5C4 "\t$@"
 *   insn=0x00000000002DC5C4 string=0x00000000002DC5C8 "$"
 *   insn=0x00000000002DC5C8 string=0x00000000002DC5CC ")$"
 *   insn=0x00000000002DC5CC string=0x00000000002DC5D0 "(@"
 *   insn=0x00000000002DC5D0 string=0x00000000002DC5D4 "\t@"
 *   insn=0x00000000002DC5D4 string=0x00000000002DC5D8 ""
 *   insn=0x00000000002DC5D8 string=0x00000000002DC5DC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode_Portal::Swap(__int64 this, Caver::Proto::MapNode_Portal *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::MapNode_Portal *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    LOBYTE(v2) = *(_BYTE *)(this + 32);
    *(_BYTE *)(this + 32) = *((_BYTE *)a2 + 32);
    *((_BYTE *)a2 + 32) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

