/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8310
 * Mangled: ._ZN5Caver23CollisionShapeComponentD2Ev
 * Demangled: Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *
 * Callers: 3
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x0000000000215138  Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent()
 *   0x000000000021BA3C  Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *
 * Callees: 1
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8318 string=0x00000000001F831C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CollisionShapeComponent::~CollisionShapeComponent(Caver::CollisionShapeComponent *this)
{
  JUMPOUT(0x213B78);
}

