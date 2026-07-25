/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5690
 * Mangled: ._ZN5Caver5Proto19WeaponGlowComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::WeaponGlowComponent::MergeFrom(Caver::Proto::WeaponGlowComponent const&)
 *
 * Callers: 3
 *   0x000000000032BB6C  Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(Caver::Proto::WeaponGlowComponent const&)
 *   0x000000000032C4FC  Caver::Proto::WeaponGlowComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032C500  Caver::Proto::WeaponGlowComponent::CopyFrom(Caver::Proto::WeaponGlowComponent const&)
 *
 * Callees: 1
 *   0x000000000032BB6C  Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(Caver::Proto::WeaponGlowComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5698 string=0x00000000001F569C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::WeaponGlowComponent::MergeFrom()
{
  JUMPOUT(0x32BBBC);
}

