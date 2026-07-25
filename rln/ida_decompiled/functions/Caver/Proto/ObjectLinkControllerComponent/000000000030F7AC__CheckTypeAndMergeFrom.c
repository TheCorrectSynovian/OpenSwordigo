/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F7AC
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202BA0  Caver::Proto::ObjectLinkControllerComponent::MergeFrom(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLinkControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ObjectLinkControllerComponent *this,
        const Caver::Proto::ObjectLinkControllerComponent *a2)
{
  Caver::Proto::ObjectLinkControllerComponent::MergeFrom(this, a2);
}

