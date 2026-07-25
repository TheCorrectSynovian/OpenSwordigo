/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328020
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F46F0  Caver::Proto::ShootingMonsterControllerComponent::MergeFrom(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000328020 string=0x00000000001F46F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ShootingMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ShootingMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ShootingMonsterControllerComponent::MergeFrom();
}

