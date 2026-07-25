/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201EC0
 * Mangled: ._ZN5Caver20TrailParticleEmitterC2Ev
 * Demangled: Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *
 * Callers: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x0000000000455984  Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201EC8 string=0x0000000000201ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TrailParticleEmitter::TrailParticleEmitter(Caver::TrailParticleEmitter *this)
{
  return _ZN5Caver20TrailParticleEmitterC2Ev(this);
}

