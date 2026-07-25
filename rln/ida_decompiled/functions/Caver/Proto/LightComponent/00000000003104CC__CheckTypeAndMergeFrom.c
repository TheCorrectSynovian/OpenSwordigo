/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003104CC
 * Mangled: _ZN5Caver5Proto14LightComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::LightComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201CA0  Caver::Proto::LightComponent::MergeFrom(Caver::Proto::LightComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::LightComponent::CheckTypeAndMergeFrom(
        Caver::Proto::LightComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::LightComponent::MergeFrom();
}

