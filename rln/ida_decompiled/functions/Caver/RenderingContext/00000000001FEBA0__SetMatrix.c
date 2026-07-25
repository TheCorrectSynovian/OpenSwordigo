/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEBA0
 * Mangled: ._ZN5Caver16RenderingContext9SetMatrixERKNS_7Matrix4E
 * Demangled: Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *
 * Callers: 29
 *   0x000000000021DED4  Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x0000000000236964  Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x000000000023C854  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000002716C4  Caver::HealthComponent::DrawHealthBar(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x00000000002835E4  Caver::HookshotTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B0E90  Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002CC73C  Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000371EE4  Caver::SceneEdgeFade::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049565C  Caver::GUIButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000497658  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004977D4  Caver::GUILabel::GUILabel(void)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x000000000048B290  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FEBA4 string=0x000000000048B290 ""
 *   insn=0x00000000001FEBA8 string=0x00000000001FEBAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetMatrix(Caver::RenderingContext *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver16RenderingContext9SetMatrixERKNS_7Matrix4E(this, a2);
}

