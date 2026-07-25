/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC550
 * Mangled: ._ZNK5Caver8Skeleton16BoneIndexForNameERKSs
 * Demangled: Caver::Skeleton::BoneIndexForName(std::string const&)
 *
 * Callers: 4
 *   0x0000000000214B20  Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x00000000002C8A20  Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *
 * Callees: 1
 *   0x0000000000450E84  Caver::Skeleton::BoneIndexForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC558 string=0x00000000001FC55C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Skeleton::BoneIndexForName()
{
  return _ZNK5Caver8Skeleton16BoneIndexForNameERKSs();
}

