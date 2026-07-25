/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA720
 * Mangled: ._ZN5Caver23CollisionShapeComponent15UpdateWorldAABBEv
 * Demangled: Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *
 * Callers: 3
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000046590C  Caver::Scene::UpdateCollisionShapeWorldBounds(Caver::CollisionShapeComponent *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000021B7BC  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA728 string=0x00000000001FA72C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::UpdateWorldAABB(Caver::CollisionShapeComponent *this)
{
  return _ZN5Caver23CollisionShapeComponent15UpdateWorldAABBEv(this);
}

