/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312734
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::CharAnimControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002015E0  Caver::Proto::CharAnimControllerComponent::MergeFrom(Caver::Proto::CharAnimControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharAnimControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::CharAnimControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::CharAnimControllerComponent::MergeFrom();
}

