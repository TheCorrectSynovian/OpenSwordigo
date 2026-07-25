/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C3DC
 * Mangled: _ZN5Caver5Proto19BackgroundComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::BackgroundComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF4B0  Caver::Proto::BackgroundComponent::MergeFrom(Caver::Proto::BackgroundComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::BackgroundComponent::CheckTypeAndMergeFrom(
        Caver::Proto::BackgroundComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::BackgroundComponent::MergeFrom();
}

