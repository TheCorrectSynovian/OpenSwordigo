/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E8C0
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent4SwapEPS1_
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::Swap(Caver::Proto::BoneControlledCollisionShapeComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x000000000030E8C0 string=0x000000000030E8C4 " "
 *   insn=0x000000000030E8C4 string=0x000000000030E8C8 "("
 *   insn=0x000000000030E8C8 string=0x000000000030E8CC "\t"
 *   insn=0x000000000030E8CC string=0x000000000030E8D0 ""
 *   insn=0x000000000030E8D0 string=0x000000000030E8D4 ")"
 *   insn=0x000000000030E8D4 string=0x000000000030E8D8 "(@"
 *   insn=0x000000000030E8D8 string=0x000000000030E8DC "\t@"
 *   insn=0x000000000030E8DC string=0x000000000030E8E0 ""
 *   insn=0x000000000030E8E0 string=0x000000000030E8E4 ")"
 *   insn=0x000000000030E8E4 string=0x000000000030E8E8 "("
 *   insn=0x000000000030E8E8 string=0x000000000030E8EC "\t"
 *   insn=0x000000000030E8EC string=0x000000000030E8F0 ""
 *   insn=0x000000000030E8F0 string=0x000000000030E8F4 ")"
 *   insn=0x000000000030E8F4 string=0x000000000030E8F8 "(@"
 *   insn=0x000000000030E8F8 string=0x000000000030E8FC "\t@"
 *   insn=0x000000000030E8FC string=0x000000000030E900 ""
 *   insn=0x000000000030E900 string=0x000000000030E904 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::Swap(
        __int64 this,
        Caver::Proto::BoneControlledCollisionShapeComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::BoneControlledCollisionShapeComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

