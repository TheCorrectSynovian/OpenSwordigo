/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD7C0
 * Mangled: ._ZN5Caver5Shape18ShapeWithRectangleERKNS_9RectangleE
 * Demangled: Caver::Shape::ShapeWithRectangle(Caver::Rectangle const&)
 *
 * Callers: 5
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000238650  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000238BD4  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD7C8 string=0x00000000001FD7CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Shape::ShapeWithRectangle()
{
  JUMPOUT(0x21AFE4);
}

