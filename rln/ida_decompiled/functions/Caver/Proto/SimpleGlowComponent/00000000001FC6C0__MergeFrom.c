/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC6C0
 * Mangled: ._ZN5Caver5Proto19SimpleGlowComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SimpleGlowComponent::MergeFrom(Caver::Proto::SimpleGlowComponent const&)
 *
 * Callers: 3
 *   0x0000000000321CCC  Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *   0x0000000000322850  Caver::Proto::SimpleGlowComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000322854  Caver::Proto::SimpleGlowComponent::CopyFrom(Caver::Proto::SimpleGlowComponent const&)
 *
 * Callees: 1
 *   0x0000000000321CCC  Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC6C8 string=0x00000000001FC6CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SimpleGlowComponent::MergeFrom()
{
  JUMPOUT(0x321D28);
}

