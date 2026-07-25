/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BC88
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::HeroEntityComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F54E0  Caver::Proto::HeroEntityComponent::MergeFrom(Caver::Proto::HeroEntityComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000031BC88 string=0x00000000001F54E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::HeroEntityComponent::CheckTypeAndMergeFrom(
        Caver::Proto::HeroEntityComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::HeroEntityComponent::MergeFrom();
}

