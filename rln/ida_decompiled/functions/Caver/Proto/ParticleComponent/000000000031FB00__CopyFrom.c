/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FB00
 * Mangled: _ZN5Caver5Proto17ParticleComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ParticleComponent::CopyFrom(Caver::Proto::ParticleComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4C30  Caver::Proto::ParticleComponent::MergeFrom(Caver::Proto::ParticleComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000031FB14 string=0x000000000031FB18 "@"
 *   insn=0x000000000031FB20 string=0x000000000031FB24 ""
 *   insn=0x000000000031FB38 string=0x000000000031FB3C "=T"
 *   insn=0x000000000031FB3C string=0x00000000001F4C30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleComponent::CopyFrom(
        Caver::Proto::ParticleComponent *this,
        const Caver::Proto::ParticleComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ParticleComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ParticleComponent::MergeFrom();
  }
}

