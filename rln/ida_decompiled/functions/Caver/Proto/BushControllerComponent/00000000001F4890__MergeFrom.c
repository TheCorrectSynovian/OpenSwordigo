/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4890
 * Mangled: ._ZN5Caver5Proto23BushControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BushControllerComponent::MergeFrom(Caver::Proto::BushControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000314BD0  Caver::Proto::BushControllerComponent::BushControllerComponent(Caver::Proto::BushControllerComponent const&)
 *   0x0000000000315174  Caver::Proto::BushControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000315178  Caver::Proto::BushControllerComponent::CopyFrom(Caver::Proto::BushControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000314BD0  Caver::Proto::BushControllerComponent::BushControllerComponent(Caver::Proto::BushControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4898 string=0x00000000001F489C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BushControllerComponent::MergeFrom()
{
  JUMPOUT(0x314C20);
}

