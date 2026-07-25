/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002013A0
 * Mangled: ._ZN5Caver5Proto23CharControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::CharControllerComponent::MergeFrom(Caver::Proto::CharControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003128D4  Caver::Proto::CharControllerComponent::CharControllerComponent(Caver::Proto::CharControllerComponent const&)
 *   0x0000000000314320  Caver::Proto::CharControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000314324  Caver::Proto::CharControllerComponent::CopyFrom(Caver::Proto::CharControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003128D4  Caver::Proto::CharControllerComponent::CharControllerComponent(Caver::Proto::CharControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002013A8 string=0x00000000002013AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::CharControllerComponent::MergeFrom()
{
  JUMPOUT(0x312960);
}

