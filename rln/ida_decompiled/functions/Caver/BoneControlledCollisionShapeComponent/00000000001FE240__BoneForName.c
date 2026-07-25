/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE240
 * Mangled: ._ZN5Caver37BoneControlledCollisionShapeComponent11BoneForNameERKSs
 * Demangled: Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *
 * Callers: 2
 *   0x000000000021490C  Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000214B20  Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE248 string=0x00000000001FE24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::BoneForName(Caver::Component *a1)
{
  return _ZN5Caver37BoneControlledCollisionShapeComponent11BoneForNameERKSs(a1);
}

