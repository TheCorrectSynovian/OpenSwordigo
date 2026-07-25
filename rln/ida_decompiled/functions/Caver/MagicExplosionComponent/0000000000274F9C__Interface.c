/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274F9C
 * Mangled: _ZN5Caver23MagicExplosionComponent9InterfaceEv
 * Demangled: Caver::MagicExplosionComponent::Interface(void)
 *
 * Callers: 9
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x0000000000288D4C  Caver::MagicExplosionComponent::ImplementsInterface(long)
 *   0x0000000000288D60  Caver::MagicExplosionComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::MagicExplosionComponent::Interface(
        Caver::MagicExplosionComponent *this))(Caver::MagicExplosionComponent *__hidden this)
{
  return Caver::MagicExplosionComponent::Interface;
}

