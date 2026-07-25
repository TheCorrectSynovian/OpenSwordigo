/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D658
 * Mangled: _ZN5Caver5Proto15PortalComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PortalComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201000  Caver::Proto::PortalComponent::MergeFrom(Caver::Proto::PortalComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PortalComponent::CheckTypeAndMergeFrom(
        Caver::Proto::PortalComponent *this,
        const Caver::Proto::PortalComponent *a2)
{
  Caver::Proto::PortalComponent::MergeFrom(this, a2);
}

