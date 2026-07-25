/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBCC0
 * Mangled: ._ZN5Caver7Matrix49RotationZEf
 * Demangled: Caver::Matrix4::RotationZ(float)
 *
 * Callers: 14
 *   0x0000000000211014  Caver::CaverShell::Render(Caver::RenderingContext *)
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000023C854  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000473F00  Caver::SceneObject::WorldMatrix(void)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x00000000004AF414  Caver::Matrix4::RotationZ(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBCC8 string=0x00000000001FBCCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::RotationZ(Caver::Matrix4 *this, float a2)
{
  return _ZN5Caver7Matrix49RotationZEf(this, a2);
}

