/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC5F0
 * Mangled: ._ZN5Caver5Proto17ItemDropComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ItemDropComponent::MergeFrom(Caver::Proto::ItemDropComponent const&)
 *
 * Callers: 3
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *   0x0000000000330DD8  Caver::Proto::ItemDropComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000330EF0  Caver::Proto::ItemDropComponent::CopyFrom(Caver::Proto::ItemDropComponent const&)
 *
 * Callees: 1
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC5F8 string=0x00000000001FC5FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ItemDropComponent::MergeFrom()
{
  JUMPOUT(0x330220);
}

