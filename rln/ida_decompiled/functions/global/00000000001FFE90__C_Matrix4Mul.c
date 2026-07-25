/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE90
 * Mangled: ._Z12C_Matrix4MulPKfS0_Pf
 * Demangled: C_Matrix4Mul(float const*,float const*,float *)
 *
 * Callers: 49
 *   0x0000000000211014  Caver::CaverShell::Render(Caver::RenderingContext *)
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000021B6C4  Caver::CollisionShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000021DED4  Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000236964  Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *   0x0000000000238DFC  Caver::ShapeComponent::WorldMatrix(void)
 *   0x0000000000238E98  Caver::ShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000023C854  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000024040C  Caver::TransformComponent::WorldMatrix(void)
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000002835E4  Caver::HookshotTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B0E90  Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x00000000002C911C  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000044AE48  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x0000000000451190  Caver::SkeletonInstance::EvaluateMatrices(void)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000457D84  Caver::Camera::EvaluateViewMatrix(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000473F00  Caver::SceneObject::WorldMatrix(void)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049565C  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *   0x00000000004A11C0  Caver::GUIView::SetOrthoProjection(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004AF818  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE98 string=0x00000000001FFE9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall C_Matrix4Mul(const float *a1, const float *a2, float *a3)
{
  return _Z12C_Matrix4MulPKfS0_Pf(a1, a2, a3);
}

