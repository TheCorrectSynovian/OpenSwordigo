/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324410
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA810  Caver::Proto::WalkingMonsterControllerComponent::MergeFrom(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000324410 string=0x00000000001FA810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::WalkingMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::WalkingMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::WalkingMonsterControllerComponent::MergeFrom();
}

