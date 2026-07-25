/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030C968
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::CollisionShapeComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF610  Caver::Proto::CollisionShapeComponent::MergeFrom(Caver::Proto::CollisionShapeComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CollisionShapeComponent::CheckTypeAndMergeFrom(
        Caver::Proto::CollisionShapeComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::CollisionShapeComponent::MergeFrom();
}

