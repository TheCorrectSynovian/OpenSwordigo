/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323898
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponent4SwapEPS1_
 * Demangled: Caver::Proto::ParticleFieldComponent::Swap(Caver::Proto::ParticleFieldComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000032389C string=0x00000000003238A0 "(@"
 *   insn=0x00000000003238A0 string=0x00000000003238A4 "\t@"
 *   insn=0x00000000003238A4 string=0x00000000003238A8 ""
 *   insn=0x00000000003238A8 string=0x00000000003238AC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::ParticleFieldComponent *__fastcall Caver::Proto::ParticleFieldComponent::Swap(
        Caver::Proto::ParticleFieldComponent *this,
        Caver::Proto::ParticleFieldComponent *a2)
{
  int v2; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

