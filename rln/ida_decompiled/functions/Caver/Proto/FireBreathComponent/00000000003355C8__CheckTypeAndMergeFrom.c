/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003355C8
 * Mangled: _ZN5Caver5Proto19FireBreathComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::FireBreathComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCF10  Caver::Proto::FireBreathComponent::MergeFrom(Caver::Proto::FireBreathComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003355C8 string=0x00000000001FCF10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::FireBreathComponent::CheckTypeAndMergeFrom(
        Caver::Proto::FireBreathComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::FireBreathComponent::MergeFrom();
}

