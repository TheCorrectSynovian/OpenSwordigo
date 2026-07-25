/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC100
 * Mangled: ._ZN5Caver5Proto22MonsterEntityComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MonsterEntityComponent::MergeFrom(Caver::Proto::MonsterEntityComponent const&)
 *
 * Callers: 3
 *   0x0000000000317654  Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(Caver::Proto::MonsterEntityComponent const&)
 *   0x0000000000318000  Caver::Proto::MonsterEntityComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000318004  Caver::Proto::MonsterEntityComponent::CopyFrom(Caver::Proto::MonsterEntityComponent const&)
 *
 * Callees: 1
 *   0x0000000000317654  Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(Caver::Proto::MonsterEntityComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC108 string=0x00000000001FC10C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MonsterEntityComponent::MergeFrom()
{
  JUMPOUT(0x3176AC);
}

