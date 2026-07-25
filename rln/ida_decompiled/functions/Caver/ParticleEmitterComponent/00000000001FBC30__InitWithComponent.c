/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC30
 * Mangled: ._ZN5Caver24ParticleEmitterComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Callers: 3
 *   0x00000000002A365C  Caver::MagicParticleEmitterComponent::InitWithComponent(Caver::MagicParticleEmitterComponent const*)
 *   0x00000000002A3970  Caver::MagicParticleEmitterComponent::Clone(void)
 *   0x00000000002AB9A4  sub_2AB9A4
 *
 * Callees: 1
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC38 string=0x00000000001FBC3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::InitWithComponent(
        Caver::ParticleEmitterComponent *this,
        const Caver::ParticleEmitterComponent *a2)
{
  return _ZN5Caver24ParticleEmitterComponent17InitWithComponentEPKS0_(this, a2);
}

