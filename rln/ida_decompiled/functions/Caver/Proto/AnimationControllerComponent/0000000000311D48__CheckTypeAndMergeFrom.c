/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311D48
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::AnimationControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFA10  Caver::Proto::AnimationControllerComponent::MergeFrom(Caver::Proto::AnimationControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::AnimationControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::AnimationControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::AnimationControllerComponent::MergeFrom();
}

