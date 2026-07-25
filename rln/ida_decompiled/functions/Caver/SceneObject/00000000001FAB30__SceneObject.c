/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB30
 * Mangled: ._ZN5Caver11SceneObjectC2Ev
 * Demangled: Caver::SceneObject::SceneObject(void)
 *
 * Callers: 28
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x0000000000270F8C  Caver::HealthComponent::Update(float)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x000000000028E580  Caver::SkillComponent::CreateSpellObject(void)
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000469290  sub_469290
 *
 * Callees: 1
 *   0x000000000046ED60  Caver::SceneObject::SceneObject(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB38 string=0x00000000001FAB3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::SceneObject(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObjectC2Ev(this);
}

