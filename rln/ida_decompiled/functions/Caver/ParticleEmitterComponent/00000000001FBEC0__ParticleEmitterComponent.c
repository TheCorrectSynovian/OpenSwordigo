/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBEC0
 * Mangled: ._ZN5Caver24ParticleEmitterComponentC2Ev_0
 * Demangled: Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Callers: 3
 *   0x00000000002A35BC  Caver::GlowComponent::className(void)
 *   0x00000000002A3970  Caver::MagicParticleEmitterComponent::Clone(void)
 *   0x00000000002AB9A4  sub_2AB9A4
 *
 * Callees: 1
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBEC8 string=0x00000000001FBECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::ParticleEmitterComponent(Caver::ParticleEmitterComponent *this)
{
  return _ZN5Caver24ParticleEmitterComponentC2Ev(this);
}

