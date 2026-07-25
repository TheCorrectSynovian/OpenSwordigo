/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD580
 * Mangled: ._ZN5Caver37BoneControlledCollisionShapeComponentC2Ev_0
 * Demangled: Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Callers: 1
 *   0x0000000000215380  Caver::BoneControlledCollisionShapeComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD588 string=0x00000000001FD58C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  return _ZN5Caver37BoneControlledCollisionShapeComponentC2Ev(this);
}

