/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F52A0
 * Mangled: ._ZN5Caver23CollisionShapeComponentC2Ev
 * Demangled: Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Callers: 1
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Callees: 1
 *   0x000000000021779C  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F52A8 string=0x00000000001F52AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::CollisionShapeComponent(Caver::CollisionShapeComponent *this)
{
  return _ZN5Caver23CollisionShapeComponentC2Ev(this);
}

