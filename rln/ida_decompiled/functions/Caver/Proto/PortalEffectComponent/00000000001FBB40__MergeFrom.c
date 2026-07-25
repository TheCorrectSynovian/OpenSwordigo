/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB40
 * Mangled: ._ZN5Caver5Proto21PortalEffectComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::PortalEffectComponent::MergeFrom(Caver::Proto::PortalEffectComponent const&)
 *
 * Callers: 3
 *   0x0000000000331D90  Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *   0x0000000000332790  Caver::Proto::PortalEffectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000332794  Caver::Proto::PortalEffectComponent::CopyFrom(Caver::Proto::PortalEffectComponent const&)
 *
 * Callees: 1
 *   0x0000000000331D90  Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB48 string=0x00000000001FBB4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::PortalEffectComponent::MergeFrom()
{
  JUMPOUT(0x331DE4);
}

