/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F67F0
 * Mangled: ._ZN5Caver15ParticleEmitterC2Ev
 * Demangled: Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Callers: 5
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x0000000000452044  Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x0000000000455984  Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *   0x0000000000456308  Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *
 * Callees: 1
 *   0x00000000003DC7D8  Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F67F8 string=0x00000000001F67FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitter::ParticleEmitter(Caver::ParticleEmitter *this)
{
  return _ZN5Caver15ParticleEmitterC2Ev(this);
}

