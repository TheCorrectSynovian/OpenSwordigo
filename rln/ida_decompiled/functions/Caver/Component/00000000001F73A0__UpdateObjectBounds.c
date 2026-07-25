/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F73A0
 * Mangled: ._ZN5Caver9Component18UpdateObjectBoundsEv
 * Demangled: Caver::Component::UpdateObjectBounds(void)
 *
 * Callers: 12
 *   0x000000000021AAB0  Caver::CollisionShapeComponent::SetShape(Caver::Shape const&)
 *   0x000000000021AC00  Caver::CollisionShapeComponent::UpdateBounds(void)
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x000000000023BDC4  Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000023C1B0  Caver::SpriteComponent::Prepare(void)
 *   0x000000000023C678  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002BE92C  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *   0x00000000002BEAB8  Caver::GroundPolygonComponent::SetPolygon(Caver::Polygon const&)
 *   0x00000000002BEC04  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BEF34  Caver::GroundPolygonComponent::UpdateBounds(void)
 *   0x00000000002C2C38  Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Callees: 1
 *   0x0000000000242218  Caver::Component::UpdateObjectBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F73A8 string=0x00000000001F73AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::UpdateObjectBounds(Caver::Component *this)
{
  return _ZN5Caver9Component18UpdateObjectBoundsEv(this);
}

