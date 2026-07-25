/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D614
 * Mangled: _ZN5Caver5Proto15DamageComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::DamageComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4A80  Caver::Proto::DamageComponent::MergeFrom(Caver::Proto::DamageComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000030D614 string=0x00000000001F4A80 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::DamageComponent::CheckTypeAndMergeFrom(
        Caver::Proto::DamageComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::DamageComponent::MergeFrom();
}

