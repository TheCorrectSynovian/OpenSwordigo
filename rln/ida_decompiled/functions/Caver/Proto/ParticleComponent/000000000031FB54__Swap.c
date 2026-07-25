/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FB54
 * Mangled: _ZN5Caver5Proto17ParticleComponent4SwapEPS1_
 * Demangled: Caver::Proto::ParticleComponent::Swap(Caver::Proto::ParticleComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000031FB58 string=0x000000000031FB5C "(@"
 *   insn=0x000000000031FB5C string=0x000000000031FB60 "\t@"
 *   insn=0x000000000031FB60 string=0x000000000031FB64 ""
 *   insn=0x000000000031FB64 string=0x000000000031FB68 ")"
 *   insn=0x000000000031FB68 string=0x000000000031FB6C "("
 *   insn=0x000000000031FB6C string=0x000000000031FB70 "\t"
 *   insn=0x000000000031FB70 string=0x000000000031FB74 ""
 *   insn=0x000000000031FB74 string=0x000000000031FB78 ")"
 *   insn=0x000000000031FB78 string=0x000000000031FB7C "(@"
 *   insn=0x000000000031FB7C string=0x000000000031FB80 "\t@"
 *   insn=0x000000000031FB80 string=0x000000000031FB84 ""
 *   insn=0x000000000031FB84 string=0x000000000031FB88 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::Swap(__int64 this, Caver::Proto::ParticleComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::ParticleComponent *)this )
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

