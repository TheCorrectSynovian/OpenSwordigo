/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5DA0
 * Mangled: ._ZN5Caver11SceneObject28RegisterForWorldBoundsUpdateEv
 * Demangled: Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Callers: 59
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021AC6C  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *   0x000000000021B8D0  sub_21B8D0
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022BF34  Caver::OverlayTargetArrowComponent::Update(float)
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002367AC  Caver::ShadowVolumeComponent::Update(float)
 *   0x0000000000236888  `non-virtual thunk to'Caver::ShadowVolumeComponent::Update(float)
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *   0x00000000002411E0  Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000025DB5C  Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x0000000000270F8C  Caver::HealthComponent::Update(float)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x000000000027BF1C  Caver::MonsterEntityComponent::Update(float)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027FF78  Caver::PhysicsObjectState::setPosition(Caver::Vector2 const&)
 *   0x000000000028002C  Caver::PhysicsObjectState::setRotation(float)
 *   0x0000000000280348  Caver::PhysicsObjectState::UpdateObjectState(float)
 *   0x0000000000280658  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x0000000000281440  Caver::PhysicsPlatformComponent::Update(float)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x00000000002863DC  Caver::MagicBombComponent::Update(float)
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028CC3C  Caver::ProjectileControllerComponent::Update(float)
 *   0x000000000028CCE8  `non-virtual thunk to'Caver::ProjectileControllerComponent::Update(float)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *   0x000000000028EB48  Caver::SkillComponent::UpdateCastObjectPosition(void)
 *   0x000000000028EC2C  Caver::SkillComponent::FinishCasting(void)
 *   0x000000000028EF00  Caver::SkillComponent::Update(float)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x000000000029B3FC  Caver::MonsterDeathControllerComponent::Update(float)
 *   0x000000000029BF64  Caver::ProjectileMonsterControllerComponent::Update(float)
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002A49F0  Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002ACD5C  Caver::ParticleObjectComponent::Update(float)
 *   0x00000000002ACE24  `non-virtual thunk to'Caver::ParticleObjectComponent::Update(float)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002B4628  Caver::ElevatorControllerComponent::Update(float)
 *   0x00000000002B60B8  Caver::PressureTriggerComponent::Update(float)
 *   0x00000000002C5630  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x0000000000469290  sub_469290
 *   0x000000000047743C  sub_47743C
 *   0x00000000004775C0  sub_4775C0
 *   0x00000000004777B8  sub_4777B8
 *
 * Callees: 1
 *   0x0000000000473B08  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5DA8 string=0x00000000001F5DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RegisterForWorldBoundsUpdate(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObject28RegisterForWorldBoundsUpdateEv(this);
}

