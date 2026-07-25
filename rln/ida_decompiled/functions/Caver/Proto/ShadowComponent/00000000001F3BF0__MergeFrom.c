/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3BF0
 * Mangled: ._ZN5Caver5Proto15ShadowComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ShadowComponent::MergeFrom(Caver::Proto::ShadowComponent const&)
 *
 * Callers: 3
 *   0x000000000031063C  Caver::Proto::ShadowComponent::ShadowComponent(Caver::Proto::ShadowComponent const&)
 *   0x0000000000310D44  Caver::Proto::ShadowComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000310D48  Caver::Proto::ShadowComponent::CopyFrom(Caver::Proto::ShadowComponent const&)
 *
 * Callees: 1
 *   0x000000000031063C  Caver::Proto::ShadowComponent::ShadowComponent(Caver::Proto::ShadowComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3BF8 string=0x00000000001F3BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ShadowComponent::MergeFrom()
{
  JUMPOUT(0x310690);
}

