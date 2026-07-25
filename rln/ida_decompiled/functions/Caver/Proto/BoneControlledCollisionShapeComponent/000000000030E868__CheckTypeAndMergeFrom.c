/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E868
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD910  Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000030E868 string=0x00000000001FD910 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::CheckTypeAndMergeFrom(
        Caver::Proto::BoneControlledCollisionShapeComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom();
}

