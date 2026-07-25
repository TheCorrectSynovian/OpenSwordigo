/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B600
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::EntityInfoComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFD60  Caver::Proto::EntityInfoComponent::MergeFrom(Caver::Proto::EntityInfoComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityInfoComponent::CheckTypeAndMergeFrom(
        Caver::Proto::EntityInfoComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::EntityInfoComponent::MergeFrom();
}

