/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322D64
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponent4SwapEPS1_
 * Demangled: Caver::Proto::ParticleObjectComponent::Swap(Caver::Proto::ParticleObjectComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x0000000000322D68 string=0x0000000000322D6C "("
 *   insn=0x0000000000322D6C string=0x0000000000322D70 "\t"
 *   insn=0x0000000000322D70 string=0x0000000000322D74 ""
 *   insn=0x0000000000322D74 string=0x0000000000322D78 ")"
 *   insn=0x0000000000322D78 string=0x0000000000322D7C "("
 *   insn=0x0000000000322D7C string=0x0000000000322D80 "\t"
 *   insn=0x0000000000322D80 string=0x0000000000322D84 ""
 *   insn=0x0000000000322D84 string=0x0000000000322D88 ")"
 *   insn=0x0000000000322D88 string=0x0000000000322D8C "(@"
 *   insn=0x0000000000322D8C string=0x0000000000322D90 "\t@"
 *   insn=0x0000000000322D90 string=0x0000000000322D94 ""
 *   insn=0x0000000000322D94 string=0x0000000000322D98 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::ParticleObjectComponent *__fastcall Caver::Proto::ParticleObjectComponent::Swap(
        Caver::Proto::ParticleObjectComponent *this,
        Caver::Proto::ParticleObjectComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

