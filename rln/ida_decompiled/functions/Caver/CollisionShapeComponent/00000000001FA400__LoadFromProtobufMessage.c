/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA400
 * Mangled: ._ZN5Caver23CollisionShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x0000000000213E7C  Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000217C08  Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA408 string=0x00000000001FA40C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::LoadFromProtobufMessage(
        Caver::CollisionShapeComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver23CollisionShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

