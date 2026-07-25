/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AA10
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent4SwapEPS1_
 * Demangled: Caver::Proto::WaterMeshComponent::Swap(Caver::Proto::WaterMeshComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x000000000030AA10 string=0x000000000030AA14 " "
 *   insn=0x000000000030AA14 string=0x000000000030AA18 "("
 *   insn=0x000000000030AA18 string=0x000000000030AA1C "\t"
 *   insn=0x000000000030AA1C string=0x000000000030AA20 ""
 *   insn=0x000000000030AA20 string=0x000000000030AA24 ")"
 *   insn=0x000000000030AA24 string=0x000000000030AA28 "("
 *   insn=0x000000000030AA28 string=0x000000000030AA2C "\t"
 *   insn=0x000000000030AA2C string=0x000000000030AA30 ""
 *   insn=0x000000000030AA30 string=0x000000000030AA34 ")"
 *   insn=0x000000000030AA34 string=0x000000000030AA38 "("
 *   insn=0x000000000030AA38 string=0x000000000030AA3C "\t"
 *   insn=0x000000000030AA3C string=0x000000000030AA40 ""
 *   insn=0x000000000030AA40 string=0x000000000030AA44 ")"
 *   insn=0x000000000030AA44 string=0x000000000030AA48 "("
 *   insn=0x000000000030AA48 string=0x000000000030AA4C "\t"
 *   insn=0x000000000030AA4C string=0x000000000030AA50 ""
 *   insn=0x000000000030AA50 string=0x000000000030AA54 ")"
 *   insn=0x000000000030AA54 string=0x000000000030AA58 "((@"
 *   insn=0x000000000030AA58 string=0x000000000030AA5C "\t(@"
 *   insn=0x000000000030AA5C string=0x000000000030AA60 "("
 *   insn=0x000000000030AA60 string=0x000000000030AA64 ")("
 *   insn=0x000000000030AA64 string=0x000000000030AA68 "(@"
 *   insn=0x000000000030AA68 string=0x000000000030AA6C "\t@"
 *   insn=0x000000000030AA6C string=0x000000000030AA70 ""
 *   insn=0x000000000030AA70 string=0x000000000030AA74 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::Swap(__int64 this, Caver::Proto::WaterMeshComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::WaterMeshComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    v5 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

