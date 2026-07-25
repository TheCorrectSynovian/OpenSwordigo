/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F198
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ParticleEmitterComponent::CopyFrom(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF1D0  Caver::Proto::ParticleEmitterComponent::MergeFrom(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000031F1AC string=0x000000000031F1B0 "@"
 *   insn=0x000000000031F1B8 string=0x000000000031F1BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleEmitterComponent::CopyFrom(
        Caver::Proto::ParticleEmitterComponent *this,
        const Caver::Proto::ParticleEmitterComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ParticleEmitterComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ParticleEmitterComponent::MergeFrom(this, a2);
  }
}

