/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC20
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent11BoneForNameERKSs
 * Demangled: Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *
 * Callers: 2
 *   0x00000000002C8748  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C911C  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Callees: 1
 *   0x00000000002C8A20  Caver::SwingableWeaponControllerComponent::BoneForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC28 string=0x00000000001FAC2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::BoneForName(Caver::Component *a1)
{
  return _ZN5Caver34SwingableWeaponControllerComponent11BoneForNameERKSs(a1);
}

