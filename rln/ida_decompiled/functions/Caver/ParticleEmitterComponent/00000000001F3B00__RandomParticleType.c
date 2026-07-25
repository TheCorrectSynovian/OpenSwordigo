/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B00
 * Mangled: ._ZN5Caver24ParticleEmitterComponent18RandomParticleTypeEv
 * Demangled: Caver::ParticleEmitterComponent::RandomParticleType(void)
 *
 * Callers: 7
 *   0x0000000000282B80  Caver::FireBreathComponent::Update(float)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *   0x000000000029B1B4  Caver::MonsterDeathControllerComponent::Explode(void)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002A36A4  Caver::MagicParticleEmitterComponent::Update(float)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *
 * Callees: 1
 *   0x00000000002AAFA0  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B08 string=0x00000000001F3B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ParticleEmitterComponent::RandomParticleType(Caver::ParticleEmitterComponent *this)
{
  JUMPOUT(0x2AB240);
}

