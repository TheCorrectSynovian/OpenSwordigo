/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030491C
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::KeyframeAnimationComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA420  Caver::Proto::KeyframeAnimationComponent::MergeFrom(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000030491C string=0x00000000001FA420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::KeyframeAnimationComponent::CheckTypeAndMergeFrom(
        Caver::Proto::KeyframeAnimationComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::KeyframeAnimationComponent::MergeFrom();
}

