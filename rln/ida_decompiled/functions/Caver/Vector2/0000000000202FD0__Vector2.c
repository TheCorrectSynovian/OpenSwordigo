/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202FD0
 * Mangled: ._ZN5Caver7Vector2C2ERKNS_7Vector3E
 * Demangled: Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Callers: 46
 *   0x000000000021DED4  Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x0000000000222F98  Caver::LightComponent::Enable(Caver::RenderingContext *,int)
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x00000000002367AC  Caver::ShadowVolumeComponent::Update(float)
 *   0x0000000000236888  `non-virtual thunk to'Caver::ShadowVolumeComponent::Update(float)
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *   0x00000000002411E0  Caver::TransformControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x0000000000270F8C  Caver::HealthComponent::Update(float)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x000000000027F9E0  sub_27F9E0
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002A49F0  Caver::OrbitControllerComponent::FollowObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000002C5630  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x0000000000456AB8  Caver::Camera::NormalizedScreenPointFromWorldPosition(Caver::Vector3 const&,float *)
 *   0x0000000000456B74  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *   0x0000000000456EF8  Caver::Camera::ScreenAABBFromWorldAABB(Caver::Rectangle const&,float,Caver::Rectangle const&)
 *   0x0000000000457244  Caver::Camera::AABBOnZPlane(float)
 *   0x00000000004573A0  Caver::Camera::AABBForZRange(float,float)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000047743C  sub_47743C
 *   0x00000000004775C0  sub_4775C0
 *   0x00000000004778D0  sub_4778D0
 *   0x00000000004C7614  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004B27A4  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202FD4 string=0x00000000004B27A4 "("
 *   insn=0x0000000000202FD8 string=0x0000000000202FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::Vector2(Caver::Vector2 *this, const Caver::Vector3 *a2)
{
  return _ZN5Caver7Vector2C2ERKNS_7Vector3E(this, a2);
}

