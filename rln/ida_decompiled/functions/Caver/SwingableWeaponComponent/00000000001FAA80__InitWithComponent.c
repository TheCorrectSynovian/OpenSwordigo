/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA80
 * Mangled: ._ZN5Caver24SwingableWeaponComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SwingableWeaponComponent::InitWithComponent(Caver::SwingableWeaponComponent const*)
 *
 * Callers: 1
 *   0x00000000002C7400  Caver::SwingableWeaponComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002C3464  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA88 string=0x00000000001FAA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SwingableWeaponComponent::InitWithComponent()
{
  JUMPOUT(0x2C3E34);
}

