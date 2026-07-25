/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202350
 * Mangled: ._ZN5Caver15ParticleEmitter27ConvertLocalParticleToWorldEPNS_8ParticleE
 * Demangled: Caver::ParticleEmitter::ConvertLocalParticleToWorld(Caver::Particle *)
 *
 * Callers: 5
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *   0x00000000004559B8  Caver::TrailParticleEmitter::Update(float)
 *   0x000000000045633C  Caver::WhooshParticleEmitter::Update(float)
 *
 * Callees: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202358 string=0x000000000020235C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleEmitter::ConvertLocalParticleToWorld()
{
  JUMPOUT(0x4534D4);
}

