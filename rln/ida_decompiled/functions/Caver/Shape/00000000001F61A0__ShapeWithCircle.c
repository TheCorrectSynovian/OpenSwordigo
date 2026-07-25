/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F61A0
 * Mangled: ._ZN5Caver5Shape15ShapeWithCircleERKNS_6CircleE
 * Demangled: Caver::Shape::ShapeWithCircle(Caver::Circle const&)
 *
 * Callers: 6
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000238650  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000238BD4  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000287B34  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *
 * Callees: 1
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F61A8 string=0x00000000001F61AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Shape::ShapeWithCircle()
{
  JUMPOUT(0x214ED4);
}

