/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6930
 * Mangled: ._ZNK5Caver14ModelComponent11WorldMatrixEv
 * Demangled: Caver::ModelComponent::WorldMatrix(void)
 *
 * Callers: 6
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002C911C  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Callees: 1
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6938 string=0x00000000001F693C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ModelComponent::WorldMatrix(Caver::ModelComponent *this)
{
  JUMPOUT(0x226158);
}

