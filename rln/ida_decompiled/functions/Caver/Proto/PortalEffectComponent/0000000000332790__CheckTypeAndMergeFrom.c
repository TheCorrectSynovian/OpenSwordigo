/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332790
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PortalEffectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBB40  Caver::Proto::PortalEffectComponent::MergeFrom(Caver::Proto::PortalEffectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000332790 string=0x00000000001FBB40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PortalEffectComponent::CheckTypeAndMergeFrom(
        Caver::Proto::PortalEffectComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::PortalEffectComponent::MergeFrom();
}

