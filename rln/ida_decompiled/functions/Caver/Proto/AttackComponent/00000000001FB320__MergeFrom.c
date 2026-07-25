/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB320
 * Mangled: ._ZN5Caver5Proto15AttackComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::AttackComponent::MergeFrom(Caver::Proto::AttackComponent const&)
 *
 * Callers: 3
 *   0x0000000000325670  Caver::Proto::AttackComponent::AttackComponent(Caver::Proto::AttackComponent const&)
 *   0x0000000000326564  Caver::Proto::AttackComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000326568  Caver::Proto::AttackComponent::CopyFrom(Caver::Proto::AttackComponent const&)
 *
 * Callees: 1
 *   0x0000000000325670  Caver::Proto::AttackComponent::AttackComponent(Caver::Proto::AttackComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB328 string=0x00000000001FB32C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::AttackComponent::MergeFrom()
{
  JUMPOUT(0x3256D0);
}

