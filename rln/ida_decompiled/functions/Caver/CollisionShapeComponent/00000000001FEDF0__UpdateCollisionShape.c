/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEDF0
 * Mangled: ._ZN5Caver23CollisionShapeComponent20UpdateCollisionShapeEv
 * Demangled: Caver::CollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Callers: 1
 *   0x00000000002150AC  Caver::BoneControlledCollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Callees: 1
 *   0x000000000021AA20  Caver::CollisionShapeComponent::UpdateCollisionShape(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FEDF4 string=0x000000000021AA20 ""
 *   insn=0x00000000001FEDF8 string=0x00000000001FEDFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::UpdateCollisionShape(Caver::CollisionShapeComponent *this)
{
  return _ZN5Caver23CollisionShapeComponent20UpdateCollisionShapeEv(this);
}

