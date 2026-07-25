/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF5A0
 * Mangled: ._ZN5Caver23CollisionShapeComponent15SetUpdatedShapeERKNS_5ShapeE
 * Demangled: Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *
 * Callers: 2
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000021AC6C  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF5A8 string=0x00000000001FF5AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::SetUpdatedShape(
        Caver::CollisionShapeComponent *this,
        const Caver::Shape *a2)
{
  return _ZN5Caver23CollisionShapeComponent15SetUpdatedShapeERKNS_5ShapeE(this, a2);
}

