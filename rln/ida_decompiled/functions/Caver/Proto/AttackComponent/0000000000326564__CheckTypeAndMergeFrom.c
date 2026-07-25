/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326564
 * Mangled: _ZN5Caver5Proto15AttackComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::AttackComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB320  Caver::Proto::AttackComponent::MergeFrom(Caver::Proto::AttackComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000326564 string=0x00000000001FB320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::AttackComponent::CheckTypeAndMergeFrom(
        Caver::Proto::AttackComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::AttackComponent::MergeFrom();
}

