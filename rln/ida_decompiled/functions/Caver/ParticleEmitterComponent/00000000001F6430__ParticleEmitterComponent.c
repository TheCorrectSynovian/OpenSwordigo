/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6430
 * Mangled: ._ZN5Caver24ParticleEmitterComponentC2Ev
 * Demangled: Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Callers: 1
 *   0x0000000000250278  Caver::ParticleEmitterComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6438 string=0x00000000001F643C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::ParticleEmitterComponent(Caver::ParticleEmitterComponent *this)
{
  return _ZN5Caver24ParticleEmitterComponentC2Ev(this);
}

