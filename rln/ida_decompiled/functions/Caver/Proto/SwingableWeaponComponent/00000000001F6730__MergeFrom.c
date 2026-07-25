/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6730
 * Mangled: ._ZN5Caver5Proto24SwingableWeaponComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SwingableWeaponComponent::MergeFrom(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Callers: 3
 *   0x0000000000329714  Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(Caver::Proto::SwingableWeaponComponent const&)
 *   0x000000000032A7D0  Caver::Proto::SwingableWeaponComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032A7D4  Caver::Proto::SwingableWeaponComponent::CopyFrom(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Callees: 1
 *   0x0000000000329714  Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6738 string=0x00000000001F673C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SwingableWeaponComponent::MergeFrom()
{
  JUMPOUT(0x32976C);
}

