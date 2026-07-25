/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3AB0
 * Mangled: ._ZN5Caver37BoneControlledCollisionShapeComponentC2Ev
 * Demangled: Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Callers: 1
 *   0x000000000024FBB8  Caver::BoneControlledCollisionShapeComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3AB8 string=0x00000000001F3ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  return _ZN5Caver37BoneControlledCollisionShapeComponentC2Ev(this);
}

