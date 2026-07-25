/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8920
 * Mangled: ._ZN5Caver5Proto15HealthComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::HealthComponent::MergeFrom(Caver::Proto::HealthComponent const&)
 *
 * Callers: 3
 *   0x000000000030D7C0  Caver::Proto::HealthComponent::HealthComponent(Caver::Proto::HealthComponent const&)
 *   0x000000000030DF88  Caver::Proto::HealthComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030DF8C  Caver::Proto::HealthComponent::CopyFrom(Caver::Proto::HealthComponent const&)
 *
 * Callees: 1
 *   0x000000000030D7C0  Caver::Proto::HealthComponent::HealthComponent(Caver::Proto::HealthComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8928 string=0x00000000001F892C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::HealthComponent::MergeFrom()
{
  JUMPOUT(0x30D814);
}

