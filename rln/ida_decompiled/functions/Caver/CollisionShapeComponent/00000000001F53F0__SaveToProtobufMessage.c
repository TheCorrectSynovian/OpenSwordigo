/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F53F0
 * Mangled: ._ZNK5Caver23CollisionShapeComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x0000000000213F00  Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x0000000000217DC4  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F53F8 string=0x00000000001F53FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::SaveToProtobufMessage(
        Caver::CollisionShapeComponent *this,
        Caver::Proto::Component *a2)
{
  return _ZNK5Caver23CollisionShapeComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

