/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002001A0
 * Mangled: ._ZN5Caver23CollisionShapeComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 3
 *   0x00000000002148E0  Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int)
 *   0x00000000002148F4  `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int)
 *   0x000000000021A054  Caver::BindingValue::ValueWithBool(bool)
 *
 * Callees: 1
 *   0x0000000000219E7C  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002001A8 string=0x00000000002001AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::ValueForBindedProperty(Caver::CollisionShapeComponent *this, int a2)
{
  return _ZN5Caver23CollisionShapeComponent22ValueForBindedPropertyEi(this, a2);
}

