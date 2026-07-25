/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326BB8
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAE00  Caver::Proto::LeapingMonsterControllerComponent::MergeFrom(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000326BB8 string=0x00000000001FAE00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::LeapingMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::LeapingMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::LeapingMonsterControllerComponent::MergeFrom();
}

