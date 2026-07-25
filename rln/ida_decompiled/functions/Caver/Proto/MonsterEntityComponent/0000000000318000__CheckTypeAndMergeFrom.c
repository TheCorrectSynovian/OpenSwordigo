/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318000
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MonsterEntityComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC100  Caver::Proto::MonsterEntityComponent::MergeFrom(Caver::Proto::MonsterEntityComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000318000 string=0x00000000001FC100 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MonsterEntityComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MonsterEntityComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MonsterEntityComponent::MergeFrom();
}

