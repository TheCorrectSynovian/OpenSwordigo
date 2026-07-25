/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030504C
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::BlendAnimationComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA60  Caver::Proto::BlendAnimationComponent::MergeFrom(Caver::Proto::BlendAnimationComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000030504C string=0x00000000001FBA60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::BlendAnimationComponent::CheckTypeAndMergeFrom(
        Caver::Proto::BlendAnimationComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::BlendAnimationComponent::MergeFrom();
}

