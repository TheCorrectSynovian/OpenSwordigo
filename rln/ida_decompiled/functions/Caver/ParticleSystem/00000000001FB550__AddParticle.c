/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB550
 * Mangled: ._ZN5Caver14ParticleSystem11AddParticleERKNS_8ParticleE
 * Demangled: Caver::ParticleSystem::AddParticle(Caver::Particle const&)
 *
 * Callers: 7
 *   0x00000000002A36A4  Caver::MagicParticleEmitterComponent::Update(float)
 *   0x00000000002AAFA0  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *   0x00000000004559B8  Caver::TrailParticleEmitter::Update(float)
 *   0x000000000045633C  Caver::WhooshParticleEmitter::Update(float)
 *
 * Callees: 1
 *   0x0000000000453C94  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB554 string=0x0000000000453F3C "\t D)}@"
 *   insn=0x00000000001FB558 string=0x00000000001FB55C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleSystem::AddParticle()
{
  JUMPOUT(0x453F3C);
}

