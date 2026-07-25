/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F81F0
 * Mangled: ._ZN5Caver24ParticleEmitterComponent12StopEmittingEv
 * Demangled: Caver::ParticleEmitterComponent::StopEmitting(void)
 *
 * Callers: 1
 *   0x0000000000268EB4  Caver::EntityComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002AB2D0  Caver::ParticleEmitterComponent::StopEmitting(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F81F8 string=0x00000000001F81FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::StopEmitting(Caver::ParticleEmitterComponent *this)
{
  return _ZN5Caver24ParticleEmitterComponent12StopEmittingEv(this);
}

