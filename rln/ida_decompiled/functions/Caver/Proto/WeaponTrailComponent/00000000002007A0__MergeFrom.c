/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002007A0
 * Mangled: ._ZN5Caver5Proto20WeaponTrailComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::WeaponTrailComponent::MergeFrom(Caver::Proto::WeaponTrailComponent const&)
 *
 * Callers: 3
 *   0x000000000032C638  Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(Caver::Proto::WeaponTrailComponent const&)
 *   0x000000000032CBA4  Caver::Proto::WeaponTrailComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032CBA8  Caver::Proto::WeaponTrailComponent::CopyFrom(Caver::Proto::WeaponTrailComponent const&)
 *
 * Callees: 1
 *   0x000000000032C638  Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(Caver::Proto::WeaponTrailComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002007A8 string=0x00000000002007AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::WeaponTrailComponent::MergeFrom()
{
  JUMPOUT(0x32C68C);
}

