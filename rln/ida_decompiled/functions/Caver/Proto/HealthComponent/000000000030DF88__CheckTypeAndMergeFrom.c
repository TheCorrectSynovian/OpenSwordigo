/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DF88
 * Mangled: _ZN5Caver5Proto15HealthComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::HealthComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8920  Caver::Proto::HealthComponent::MergeFrom(Caver::Proto::HealthComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000030DF88 string=0x00000000001F8920 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::HealthComponent::CheckTypeAndMergeFrom(
        Caver::Proto::HealthComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::HealthComponent::MergeFrom();
}

