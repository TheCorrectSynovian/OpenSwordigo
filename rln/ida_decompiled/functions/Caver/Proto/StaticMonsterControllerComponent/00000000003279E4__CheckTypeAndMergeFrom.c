/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003279E4
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC490  Caver::Proto::StaticMonsterControllerComponent::MergeFrom(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003279E4 string=0x00000000001FC490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::StaticMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::StaticMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::StaticMonsterControllerComponent::MergeFrom();
}

