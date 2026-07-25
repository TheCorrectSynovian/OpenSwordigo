/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F54E0
 * Mangled: ._ZN5Caver5Proto19HeroEntityComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::HeroEntityComponent::MergeFrom(Caver::Proto::HeroEntityComponent const&)
 *
 * Callers: 3
 *   0x000000000031B71C  Caver::Proto::HeroEntityComponent::HeroEntityComponent(Caver::Proto::HeroEntityComponent const&)
 *   0x000000000031BC88  Caver::Proto::HeroEntityComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031BC8C  Caver::Proto::HeroEntityComponent::CopyFrom(Caver::Proto::HeroEntityComponent const&)
 *
 * Callees: 1
 *   0x000000000031B71C  Caver::Proto::HeroEntityComponent::HeroEntityComponent(Caver::Proto::HeroEntityComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F54E8 string=0x00000000001F54EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::HeroEntityComponent::MergeFrom()
{
  JUMPOUT(0x31B770);
}

