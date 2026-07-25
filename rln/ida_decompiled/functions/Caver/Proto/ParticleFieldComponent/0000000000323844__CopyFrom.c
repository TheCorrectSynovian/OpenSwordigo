/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323844
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ParticleFieldComponent::CopyFrom(Caver::Proto::ParticleFieldComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E30  Caver::Proto::ParticleFieldComponent::MergeFrom(Caver::Proto::ParticleFieldComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000323858 string=0x000000000032385C "@"
 *   insn=0x0000000000323864 string=0x0000000000323868 ""
 *   insn=0x000000000032387C string=0x0000000000323880 "lM"
 *   insn=0x0000000000323880 string=0x00000000001F6E30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleFieldComponent::CopyFrom(
        Caver::Proto::ParticleFieldComponent *this,
        const Caver::Proto::ParticleFieldComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ParticleFieldComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ParticleFieldComponent::MergeFrom();
  }
}

