/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F96C0
 * Mangled: ._ZN5Caver19HeroEntityComponent21HandleDamageCollisionEPNS_23CollisionShapeComponentES2_RKNS_13CollisionInfoE
 * Demangled: Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Callers: 1
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F96C8 string=0x00000000001F96CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEntityComponent::HandleDamageCollision()
{
  return _ZN5Caver19HeroEntityComponent21HandleDamageCollisionEPNS_23CollisionShapeComponentES2_RKNS_13CollisionInfoE();
}

