/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD310
 * Mangled: ._ZN5Caver24ParticleEmitterComponent13StartEmittingEv
 * Demangled: Caver::ParticleEmitterComponent::StartEmitting(void)
 *
 * Callers: 1
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callees: 1
 *   0x00000000002AB2C4  Caver::ParticleEmitterComponent::StartEmitting(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD318 string=0x00000000001FD31C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::StartEmitting(Caver::ParticleEmitterComponent *this)
{
  return _ZN5Caver24ParticleEmitterComponent13StartEmittingEv(this);
}

