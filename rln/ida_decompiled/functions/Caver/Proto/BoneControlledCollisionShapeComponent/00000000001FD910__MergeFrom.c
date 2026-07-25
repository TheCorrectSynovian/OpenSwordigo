/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD910
 * Mangled: ._ZN5Caver5Proto37BoneControlledCollisionShapeComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *
 * Callers: 3
 *   0x000000000030E0D4  Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *   0x000000000030E868  Caver::Proto::BoneControlledCollisionShapeComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030E86C  Caver::Proto::BoneControlledCollisionShapeComponent::CopyFrom(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *
 * Callees: 1
 *   0x000000000030E0D4  Caver::Proto::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD918 string=0x00000000001FD91C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom()
{
  JUMPOUT(0x30E130);
}

