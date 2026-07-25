/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA20
 * Mangled: ._ZN5Caver24ParticleEmitterComponentD2Ev
 * Demangled: Caver::ParticleEmitterComponent::~ParticleEmitterComponent()
 *
 * Callers: 2
 *   0x00000000002A3938  Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent()
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Callees: 1
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA28 string=0x00000000001FDA2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ParticleEmitterComponent::~ParticleEmitterComponent(Caver::ParticleEmitterComponent *this)
{
  JUMPOUT(0x2A651C);
}

