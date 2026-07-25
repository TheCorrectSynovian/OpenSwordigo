/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF80
 * Mangled: ._ZN5Caver5Proto21EntityActionComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::EntityActionComponent::MergeFrom(Caver::Proto::EntityActionComponent const&)
 *
 * Callers: 3
 *   0x000000000031A2E8  Caver::Proto::EntityActionComponent::EntityActionComponent(Caver::Proto::EntityActionComponent const&)
 *   0x000000000031A854  Caver::Proto::EntityActionComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031A858  Caver::Proto::EntityActionComponent::CopyFrom(Caver::Proto::EntityActionComponent const&)
 *
 * Callees: 1
 *   0x000000000031A2E8  Caver::Proto::EntityActionComponent::EntityActionComponent(Caver::Proto::EntityActionComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF88 string=0x00000000001FAF8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::EntityActionComponent::MergeFrom()
{
  JUMPOUT(0x31A33C);
}

