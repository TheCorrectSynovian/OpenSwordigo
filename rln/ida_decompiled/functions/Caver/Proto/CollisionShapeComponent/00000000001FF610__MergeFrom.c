/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF610
 * Mangled: ._ZN5Caver5Proto23CollisionShapeComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::CollisionShapeComponent::MergeFrom(Caver::Proto::CollisionShapeComponent const&)
 *
 * Callers: 3
 *   0x000000000030B6B4  Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(Caver::Proto::CollisionShapeComponent const&)
 *   0x000000000030C968  Caver::Proto::CollisionShapeComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030C96C  Caver::Proto::CollisionShapeComponent::CopyFrom(Caver::Proto::CollisionShapeComponent const&)
 *
 * Callees: 1
 *   0x000000000030B6B4  Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(Caver::Proto::CollisionShapeComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF618 string=0x00000000001FF61C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::CollisionShapeComponent::MergeFrom()
{
  JUMPOUT(0x30B724);
}

