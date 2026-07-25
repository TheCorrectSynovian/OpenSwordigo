/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002015E0
 * Mangled: ._ZN5Caver5Proto27CharAnimControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::CharAnimControllerComponent::MergeFrom(Caver::Proto::CharAnimControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000311E80  Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent(Caver::Proto::CharAnimControllerComponent const&)
 *   0x0000000000312734  Caver::Proto::CharAnimControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000312738  Caver::Proto::CharAnimControllerComponent::CopyFrom(Caver::Proto::CharAnimControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000311E80  Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent(Caver::Proto::CharAnimControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002015E8 string=0x00000000002015EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::CharAnimControllerComponent::MergeFrom()
{
  JUMPOUT(0x311ED0);
}

