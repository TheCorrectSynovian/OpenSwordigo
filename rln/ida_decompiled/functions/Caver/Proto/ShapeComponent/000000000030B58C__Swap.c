/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B58C
 * Mangled: _ZN5Caver5Proto14ShapeComponent4SwapEPS1_
 * Demangled: Caver::Proto::ShapeComponent::Swap(Caver::Proto::ShapeComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000030B590 string=0x000000000030B594 "(@"
 *   insn=0x000000000030B594 string=0x000000000030B598 "\t@"
 *   insn=0x000000000030B598 string=0x000000000030B59C ""
 *   insn=0x000000000030B59C string=0x000000000030B5A0 ")"
 *   insn=0x000000000030B5A0 string=0x000000000030B5A4 "("
 *   insn=0x000000000030B5A4 string=0x000000000030B5A8 "\t"
 *   insn=0x000000000030B5A8 string=0x000000000030B5AC ""
 *   insn=0x000000000030B5AC string=0x000000000030B5B0 ")"
 *   insn=0x000000000030B5B0 string=0x000000000030B5B4 "("
 *   insn=0x000000000030B5B4 string=0x000000000030B5B8 "\t"
 *   insn=0x000000000030B5B8 string=0x000000000030B5BC ""
 *   insn=0x000000000030B5BC string=0x000000000030B5C0 ")"
 *   insn=0x000000000030B5C0 string=0x000000000030B5C4 "((@"
 *   insn=0x000000000030B5C4 string=0x000000000030B5C8 "\t(@"
 *   insn=0x000000000030B5C8 string=0x000000000030B5CC "("
 *   insn=0x000000000030B5CC string=0x000000000030B5D0 ")("
 *   insn=0x000000000030B5D0 string=0x000000000030B5D4 "(@"
 *   insn=0x000000000030B5D4 string=0x000000000030B5D8 "\t@"
 *   insn=0x000000000030B5D8 string=0x000000000030B5DC ""
 *   insn=0x000000000030B5DC string=0x000000000030B5E0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::Swap(__int64 this, Caver::Proto::ShapeComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::ShapeComponent *)this )
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

