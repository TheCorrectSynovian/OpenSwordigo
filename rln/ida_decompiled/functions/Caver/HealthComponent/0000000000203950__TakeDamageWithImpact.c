/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203950
 * Mangled: ._ZN5Caver15HealthComponent20TakeDamageWithImpactEPNS_12DamageImpactE
 * Demangled: Caver::HealthComponent::TakeDamageWithImpact(Caver::DamageImpact *)
 *
 * Callers: 2
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203958 string=0x000000000020395C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::HealthComponent::TakeDamageWithImpact()
{
  JUMPOUT(0x270BD4);
}

