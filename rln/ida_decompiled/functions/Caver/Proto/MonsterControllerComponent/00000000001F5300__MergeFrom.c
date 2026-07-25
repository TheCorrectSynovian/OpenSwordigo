/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5300
 * Mangled: ._ZN5Caver5Proto26MonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MonsterControllerComponent::MergeFrom(Caver::Proto::MonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000323930  Caver::Proto::MonsterControllerComponent::MonsterControllerComponent(Caver::Proto::MonsterControllerComponent const&)
 *   0x0000000000323F74  Caver::Proto::MonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000323F78  Caver::Proto::MonsterControllerComponent::CopyFrom(Caver::Proto::MonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000323930  Caver::Proto::MonsterControllerComponent::MonsterControllerComponent(Caver::Proto::MonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5308 string=0x00000000001F530C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x32397C);
}

