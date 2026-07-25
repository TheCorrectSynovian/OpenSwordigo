/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE00
 * Mangled: ._ZN5Caver5Proto33LeapingMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::MergeFrom(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000326720  Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(Caver::Proto::LeapingMonsterControllerComponent const&)
 *   0x0000000000326BB8  Caver::Proto::LeapingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000326BBC  Caver::Proto::LeapingMonsterControllerComponent::CopyFrom(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000326720  Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE08 string=0x00000000001FAE0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::LeapingMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x32676C);
}

