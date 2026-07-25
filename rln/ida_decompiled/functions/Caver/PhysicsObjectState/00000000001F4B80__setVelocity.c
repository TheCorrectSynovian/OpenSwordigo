/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B80
 * Mangled: ._ZN5Caver18PhysicsObjectState11setVelocityERKNS_7Vector2E
 * Demangled: Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *
 * Callers: 6
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x0000000000293550  Caver::BatMonsterControllerComponent::Update(float)
 *   0x0000000000294A2C  Caver::BouncingMonsterControllerComponent::Jump(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002ACC8C  Caver::ParticleObjectComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000280010  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4B84 string=0x0000000000280010 ""
 *   insn=0x00000000001F4B88 string=0x00000000001F4B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectState::setVelocity(Caver::PhysicsObjectState *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver18PhysicsObjectState11setVelocityERKNS_7Vector2E(this, a2);
}

