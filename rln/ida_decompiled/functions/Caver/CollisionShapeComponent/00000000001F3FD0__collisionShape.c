/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3FD0
 * Mangled: ._ZN5Caver23CollisionShapeComponent14collisionShapeEv
 * Demangled: Caver::CollisionShapeComponent::collisionShape(void)
 *
 * Callers: 9
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *   0x000000000027F73C  Caver::PhysicsObjectComponent::HandleMessage(int,void *)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x0000000000468CE0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callees: 1
 *   0x000000000021AA84  Caver::CollisionShapeComponent::collisionShape(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3FD8 string=0x00000000001F3FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::collisionShape(Caver::CollisionShapeComponent *this)
{
  return _ZN5Caver23CollisionShapeComponent14collisionShapeEv(this);
}

