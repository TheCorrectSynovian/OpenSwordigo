/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311698
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SoundEffectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE400  Caver::Proto::SoundEffectComponent::MergeFrom(Caver::Proto::SoundEffectComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundEffectComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SoundEffectComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SoundEffectComponent::MergeFrom();
}

