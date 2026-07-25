/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A365C
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MagicParticleEmitterComponent::InitWithComponent(Caver::MagicParticleEmitterComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBC30  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A365C string=0x00000000001FBC30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicParticleEmitterComponent::InitWithComponent(
        Caver::MagicParticleEmitterComponent *this,
        const Caver::MagicParticleEmitterComponent *a2)
{
  return Caver::ParticleEmitterComponent::InitWithComponent(this, a2);
}

