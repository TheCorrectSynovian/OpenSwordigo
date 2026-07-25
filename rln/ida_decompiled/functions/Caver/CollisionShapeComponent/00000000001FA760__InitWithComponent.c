/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA760
 * Mangled: ._ZN5Caver23CollisionShapeComponent17InitWithComponentEPKS0_
 * Demangled: Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *
 * Callers: 3
 *   0x0000000000213DCC  Caver::BoneControlledCollisionShapeComponent::InitWithComponent(Caver::BoneControlledCollisionShapeComponent const*)
 *   0x0000000000215380  Caver::BoneControlledCollisionShapeComponent::Clone(void)
 *   0x000000000021BA74  Caver::CollisionShapeComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002178A0  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA768 string=0x00000000001FA76C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::InitWithComponent(
        Caver::CollisionShapeComponent *this,
        const Caver::CollisionShapeComponent *a2)
{
  return _ZN5Caver23CollisionShapeComponent17InitWithComponentEPKS0_(this, a2);
}

