/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200620
 * Mangled: ._ZN5Caver5Proto34SwingableWeaponControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Callers: 3
 *   0x000000000032A9BC  Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(Caver::Proto::SwingableWeaponControllerComponent const&)
 *   0x000000000032B238  Caver::Proto::SwingableWeaponControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032B23C  Caver::Proto::SwingableWeaponControllerComponent::CopyFrom(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Callees: 1
 *   0x000000000032A9BC  Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200628 string=0x000000000020062C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(
        Caver::Proto::SwingableWeaponControllerComponent *this,
        const Caver::Proto::SwingableWeaponControllerComponent *a2)
{
  JUMPOUT(0x32AA28);
}

