/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002032D0
 * Mangled: ._ZN5Caver5Proto14ShapeComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ShapeComponent::MergeFrom(Caver::Proto::ShapeComponent const&)
 *
 * Callers: 3
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *   0x000000000030B534  Caver::Proto::ShapeComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030B538  Caver::Proto::ShapeComponent::CopyFrom(Caver::Proto::ShapeComponent const&)
 *
 * Callees: 1
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002032D8 string=0x00000000002032DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ShapeComponent::MergeFrom()
{
  JUMPOUT(0x30AB64);
}

