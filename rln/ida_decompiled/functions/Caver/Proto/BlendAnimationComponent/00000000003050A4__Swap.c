/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003050A4
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponent4SwapEPS1_
 * Demangled: Caver::Proto::BlendAnimationComponent::Swap(Caver::Proto::BlendAnimationComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000003050A4 string=0x00000000003050A8 " "
 *   insn=0x00000000003050A8 string=0x00000000003050AC "("
 *   insn=0x00000000003050AC string=0x00000000003050B0 "\t"
 *   insn=0x00000000003050B0 string=0x00000000003050B4 ""
 *   insn=0x00000000003050B4 string=0x00000000003050B8 ")"
 *   insn=0x00000000003050B8 string=0x00000000003050BC "(@"
 *   insn=0x00000000003050BC string=0x00000000003050C0 "\t@"
 *   insn=0x00000000003050C0 string=0x00000000003050C4 ""
 *   insn=0x00000000003050C4 string=0x00000000003050C8 ")"
 *   insn=0x00000000003050C8 string=0x00000000003050CC "("
 *   insn=0x00000000003050CC string=0x00000000003050D0 "\t"
 *   insn=0x00000000003050D0 string=0x00000000003050D4 ""
 *   insn=0x00000000003050D4 string=0x00000000003050D8 ")"
 *   insn=0x00000000003050D8 string=0x00000000003050DC "(@"
 *   insn=0x00000000003050DC string=0x00000000003050E0 "\t@"
 *   insn=0x00000000003050E0 string=0x00000000003050E4 ""
 *   insn=0x00000000003050E4 string=0x00000000003050E8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BlendAnimationComponent::Swap(__int64 this, Caver::Proto::BlendAnimationComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::BlendAnimationComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

