/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD5E0
 * Mangled: ._ZN5Caver23FountainParticleEmitterC2Ev
 * Demangled: Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *
 * Callers: 2
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x0000000000452044  Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD5E8 string=0x00000000001FD5EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FountainParticleEmitter::FountainParticleEmitter(Caver::FountainParticleEmitter *this)
{
  return _ZN5Caver23FountainParticleEmitterC2Ev(this);
}

