/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323F74
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5300  Caver::Proto::MonsterControllerComponent::MergeFrom(Caver::Proto::MonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000323F74 string=0x00000000001F5300 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MonsterControllerComponent::MergeFrom();
}

