/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003285D4
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::BatMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4500  Caver::Proto::BatMonsterControllerComponent::MergeFrom(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003285D4 string=0x00000000001F4500 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::BatMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::BatMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::BatMonsterControllerComponent::MergeFrom();
}

