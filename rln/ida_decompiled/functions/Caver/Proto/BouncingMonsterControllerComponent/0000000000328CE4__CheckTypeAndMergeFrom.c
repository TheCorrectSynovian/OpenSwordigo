/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328CE4
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8490  Caver::Proto::BouncingMonsterControllerComponent::MergeFrom(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000328CE4 string=0x00000000001F8490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::BouncingMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::BouncingMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::BouncingMonsterControllerComponent::MergeFrom();
}

