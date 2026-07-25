/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A60
 * Mangled: ._ZN5Caver19HeroEntityComponent18HandleDamageImpactEPNS_12DamageImpactE
 * Demangled: Caver::HeroEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callers: 2
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A68 string=0x00000000001F5A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::HeroEntityComponent::HandleDamageImpact()
{
  JUMPOUT(0x272EC4);
}

