/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD0B0
 * Mangled: ._ZN5Caver5Proto24BreakableObjectComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BreakableObjectComponent::MergeFrom(Caver::Proto::BreakableObjectComponent const&)
 *
 * Callers: 3
 *   0x0000000000318DB0  Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(Caver::Proto::BreakableObjectComponent const&)
 *   0x0000000000319670  Caver::Proto::BreakableObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000319674  Caver::Proto::BreakableObjectComponent::CopyFrom(Caver::Proto::BreakableObjectComponent const&)
 *
 * Callees: 1
 *   0x0000000000318DB0  Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(Caver::Proto::BreakableObjectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD0B8 string=0x00000000001FD0BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BreakableObjectComponent::MergeFrom()
{
  JUMPOUT(0x318E08);
}

