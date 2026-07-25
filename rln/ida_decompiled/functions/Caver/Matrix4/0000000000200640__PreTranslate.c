/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200640
 * Mangled: ._ZN5Caver7Matrix412PreTranslateERKNS_7Vector3E
 * Demangled: Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Callers: 8
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000024040C  Caver::TransformComponent::WorldMatrix(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002C5630  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x0000000000451190  Caver::SkeletonInstance::EvaluateMatrices(void)
 *   0x0000000000473F00  Caver::SceneObject::WorldMatrix(void)
 *   0x0000000000497658  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004AF10C  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200644 string=0x00000000004AF10C " "
 *   insn=0x0000000000200648 string=0x000000000020064C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::PreTranslate(Caver::Matrix4 *this, const Caver::Vector3 *a2)
{
  return _ZN5Caver7Matrix412PreTranslateERKNS_7Vector3E(this, a2);
}

