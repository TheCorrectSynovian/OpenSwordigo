/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE30
 * Mangled: ._ZN5Caver10fastrandomEv
 * Demangled: Caver::fastrandom(void)
 *
 * Callers: 33
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x0000000000278138  Caver::ItemDropComponent::RegisterLibrary(void)
 *   0x00000000002782F8  Caver::ItemDropComponent::RandomSingleItem(int,Caver::ItemDropComponent::ItemDropEntry *)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x0000000000282B80  Caver::FireBreathComponent::Update(float)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *   0x00000000002934EC  Caver::BatMonsterControllerComponent::Prepare(void)
 *   0x000000000029B1B4  Caver::MonsterDeathControllerComponent::Explode(void)
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002A36A4  Caver::MagicParticleEmitterComponent::Update(float)
 *   0x00000000002A44F4  Caver::OrbitControllerComponent::Prepare(void)
 *   0x00000000002AAFA0  Caver::ParticleEmitterComponent::AddParticle(int,Caver::Vector3 const&,Caver::Vector3 const&,float,Caver::Color const&,float)
 *   0x00000000002ACC8C  Caver::ParticleObjectComponent::Prepare(void)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000002B1918  Caver::BushControllerComponent::Prepare(void)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *   0x00000000002BE428  Caver::GroundMeshGeneratorComponent::PerformBindedAction(int)
 *   0x00000000002BE46C  `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::PerformBindedAction(int)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *   0x00000000004559B8  Caver::TrailParticleEmitter::Update(float)
 *   0x000000000045633C  Caver::WhooshParticleEmitter::Update(float)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x000000000048AB64  Caver::VaryingColor::RandomColor(void)
 *   0x00000000004D5CF4  sub_4D5CF4
 *   0x00000000004D623C  sub_4D623C
 *
 * Callees: 1
 *   0x000000000047D274  Caver::fastrandom(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCE34 string=0x000000000047D274 "h"
 *   insn=0x00000000001FCE38 string=0x00000000001FCE3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::fastrandom(Caver *this)
{
  return _ZN5Caver10fastrandomEv(this);
}

