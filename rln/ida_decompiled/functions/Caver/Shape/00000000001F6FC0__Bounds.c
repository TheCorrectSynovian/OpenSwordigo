/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6FC0
 * Mangled: ._ZNK5Caver5Shape6BoundsEv
 * Demangled: Caver::Shape::Bounds(void)
 *
 * Callers: 9
 *   0x000000000021AAB0  Caver::CollisionShapeComponent::SetShape(Caver::Shape const&)
 *   0x000000000021AC00  Caver::CollisionShapeComponent::UpdateBounds(void)
 *   0x000000000021AC6C  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *   0x00000000002999FC  Caver::MonsterControllerComponent::Prepare(void)
 *   0x0000000000299AA0  Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *   0x00000000002B41F0  Caver::ElevatorControllerComponent::Prepare(void)
 *   0x00000000002C2C38  Caver::WaterMeshComponent::UpdateBounds(void)
 *   0x0000000000458650  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *
 * Callees: 1
 *   0x00000000004B2760  Caver::Shape::Bounds(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6FC4 string=0x00000000004B2760 "\t"
 *   insn=0x00000000001F6FC8 string=0x00000000001F6FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Shape::Bounds(Caver::Shape *this)
{
  return _ZNK5Caver5Shape6BoundsEv(this);
}

