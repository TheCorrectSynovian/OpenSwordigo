/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF10
 * Mangled: ._ZN5Caver5Proto19FireBreathComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::FireBreathComponent::MergeFrom(Caver::Proto::FireBreathComponent const&)
 *
 * Callers: 3
 *   0x0000000000334E14  Caver::Proto::FireBreathComponent::FireBreathComponent(Caver::Proto::FireBreathComponent const&)
 *   0x00000000003355C8  Caver::Proto::FireBreathComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003355CC  Caver::Proto::FireBreathComponent::CopyFrom(Caver::Proto::FireBreathComponent const&)
 *
 * Callees: 1
 *   0x0000000000334E14  Caver::Proto::FireBreathComponent::FireBreathComponent(Caver::Proto::FireBreathComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF18 string=0x00000000001FCF1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::FireBreathComponent::MergeFrom()
{
  JUMPOUT(0x334E68);
}

