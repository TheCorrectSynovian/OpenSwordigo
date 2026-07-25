/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CA64
 * Mangled: _ZN5Caver5Proto19PropertiesComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PropertiesComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFA50  Caver::Proto::PropertiesComponent::MergeFrom(Caver::Proto::PropertiesComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PropertiesComponent::CheckTypeAndMergeFrom(
        Caver::Proto::PropertiesComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::PropertiesComponent::MergeFrom();
}

