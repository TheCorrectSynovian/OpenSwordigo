/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E80
 * Mangled: ._ZNK5Caver14CollisionShape19NearestPointInShapeERKNS_7Vector2E
 * Demangled: Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *
 * Callers: 5
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000217554  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E88 string=0x00000000001F8E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShape::NearestPointInShape(Caver::CollisionShape *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver14CollisionShape19NearestPointInShapeERKNS_7Vector2E(this, a2);
}

