/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A17C
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::EntityControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203E60  Caver::Proto::EntityControllerComponent::MergeFrom(Caver::Proto::EntityControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::EntityControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::EntityControllerComponent::MergeFrom();
}

