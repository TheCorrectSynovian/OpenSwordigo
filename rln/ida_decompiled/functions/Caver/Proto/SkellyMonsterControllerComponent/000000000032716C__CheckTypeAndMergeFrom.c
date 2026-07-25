/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032716C
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA0A0  Caver::Proto::SkellyMonsterControllerComponent::MergeFrom(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032716C string=0x00000000001FA0A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SkellyMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SkellyMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SkellyMonsterControllerComponent::MergeFrom();
}

