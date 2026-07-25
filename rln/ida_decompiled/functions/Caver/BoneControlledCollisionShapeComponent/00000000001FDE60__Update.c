/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE60
 * Mangled: ._ZN5Caver37BoneControlledCollisionShapeComponent6UpdateEf
 * Demangled: Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE68 string=0x00000000001FDE6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::Update(
        Caver::BoneControlledCollisionShapeComponent *this,
        float a2)
{
  return _ZN5Caver37BoneControlledCollisionShapeComponent6UpdateEf(this, a2);
}

