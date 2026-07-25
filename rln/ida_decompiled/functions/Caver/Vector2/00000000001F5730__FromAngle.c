/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5730
 * Mangled: ._ZN5Caver7Vector29FromAngleEf
 * Demangled: Caver::Vector2::FromAngle(float)
 *
 * Callers: 16
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *   0x0000000000294A2C  Caver::BouncingMonsterControllerComponent::Jump(void)
 *   0x000000000029B1B4  Caver::MonsterDeathControllerComponent::Explode(void)
 *   0x00000000002A36A4  Caver::MagicParticleEmitterComponent::Update(float)
 *   0x00000000002B09B8  Caver::SimpleGlowComponent::CreateVertexData(void)
 *   0x00000000003BC04C  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *   0x00000000004559B8  Caver::TrailParticleEmitter::Update(float)
 *   0x000000000045633C  Caver::WhooshParticleEmitter::Update(float)
 *   0x00000000004D505C  sub_4D505C
 *
 * Callees: 1
 *   0x00000000004B2B60  Caver::Vector2::FromAngle(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5738 string=0x00000000001F573C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::FromAngle(Caver::Vector2 *this, float a2)
{
  return _ZN5Caver7Vector29FromAngleEf(this, a2);
}

