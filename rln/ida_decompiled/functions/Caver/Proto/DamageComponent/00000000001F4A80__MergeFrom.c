/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A80
 * Mangled: ._ZN5Caver5Proto15DamageComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::DamageComponent::MergeFrom(Caver::Proto::DamageComponent const&)
 *
 * Callers: 3
 *   0x000000000030CB4C  Caver::Proto::DamageComponent::DamageComponent(Caver::Proto::DamageComponent const&)
 *   0x000000000030D614  Caver::Proto::DamageComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030D618  Caver::Proto::DamageComponent::CopyFrom(Caver::Proto::DamageComponent const&)
 *
 * Callees: 1
 *   0x000000000030CB4C  Caver::Proto::DamageComponent::DamageComponent(Caver::Proto::DamageComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A88 string=0x00000000001F4A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::DamageComponent::MergeFrom()
{
  JUMPOUT(0x30CBAC);
}

