/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201380
 * Mangled: ._ZN5Caver13ObjectLibrary15TemplateForNameERKSsb
 * Demangled: Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *
 * Callers: 28
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
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *   0x000000000028F0B4  sub_28F0B4
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029C6EC  Caver::ShootingMonsterControllerComponent::Prepare(void)
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000469290  sub_469290
 *
 * Callees: 1
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201388 string=0x000000000020138C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ObjectLibrary::TemplateForName()
{
  JUMPOUT(0x45D0CC);
}

