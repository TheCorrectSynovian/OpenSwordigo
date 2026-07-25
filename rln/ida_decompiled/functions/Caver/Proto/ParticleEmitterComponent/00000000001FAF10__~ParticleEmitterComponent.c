/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF10
 * Mangled: ._ZN5Caver5Proto24ParticleEmitterComponentD2Ev
 * Demangled: Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent()
 *
 * Callers: 1
 *   0x000000000031E2B0  Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent()
 *
 * Callees: 1
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF18 string=0x00000000001FAF1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent(
        Caver::Proto::ParticleEmitterComponent *this)
{
  JUMPOUT(0x31E0E0);
}

