/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E40
 * Mangled: ._ZN5Caver5Proto24DimensionObjectComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::DimensionObjectComponent::MergeFrom(Caver::Proto::DimensionObjectComponent const&)
 *
 * Callers: 3
 *   0x0000000000337498  Caver::Proto::DimensionObjectComponent::DimensionObjectComponent(Caver::Proto::DimensionObjectComponent const&)
 *   0x00000000003376A4  Caver::Proto::DimensionObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003376A8  Caver::Proto::DimensionObjectComponent::CopyFrom(Caver::Proto::DimensionObjectComponent const&)
 *
 * Callees: 1
 *   0x0000000000337498  Caver::Proto::DimensionObjectComponent::DimensionObjectComponent(Caver::Proto::DimensionObjectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E48 string=0x0000000000203E4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::DimensionObjectComponent::MergeFrom()
{
  JUMPOUT(0x3374E0);
}

