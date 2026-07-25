/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C75D0
 * Mangled: _ZN5Caver19WeaponGlowComponent9InterfaceEv
 * Demangled: Caver::WeaponGlowComponent::Interface(void)
 *
 * Callers: 5
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *   0x00000000002C74A8  Caver::SwingableWeaponComponent::className(void)
 *   0x00000000002C75D0  Caver::WeaponGlowComponent::Interface(void)
 *   0x00000000002CC070  Caver::WeaponGlowComponent::ImplementsInterface(long)
 *   0x00000000002CC098  Caver::WeaponGlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::WeaponGlowComponent::Interface(
        Caver::WeaponGlowComponent *this))(Caver::WeaponGlowComponent *__hidden this)
{
  return Caver::WeaponGlowComponent::Interface;
}

