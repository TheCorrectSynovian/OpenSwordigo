/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F74B0
 * Mangled: ._ZNK5Caver11SceneObject11WorldMatrixEv
 * Demangled: Caver::SceneObject::WorldMatrix(void)
 *
 * Callers: 13
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x0000000000235720  Caver::ShadowComponent::UpdateShadowBounds(void)
 *   0x0000000000238DFC  Caver::ShapeComponent::WorldMatrix(void)
 *   0x0000000000238E98  Caver::ShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x00000000002C911C  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x0000000000458650  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *
 * Callees: 1
 *   0x0000000000473F00  Caver::SceneObject::WorldMatrix(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F74B8 string=0x00000000001F74BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::WorldMatrix(Caver::SceneObject *this)
{
  return _ZNK5Caver11SceneObject11WorldMatrixEv(this);
}

