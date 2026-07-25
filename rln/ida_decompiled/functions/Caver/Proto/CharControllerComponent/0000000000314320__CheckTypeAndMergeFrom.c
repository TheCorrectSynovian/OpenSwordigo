/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314320
 * Mangled: _ZN5Caver5Proto23CharControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::CharControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002013A0  Caver::Proto::CharControllerComponent::MergeFrom(Caver::Proto::CharControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::CharControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::CharControllerComponent::MergeFrom();
}

