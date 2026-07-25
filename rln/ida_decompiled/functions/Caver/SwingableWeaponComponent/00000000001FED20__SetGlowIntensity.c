/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED20
 * Mangled: ._ZN5Caver24SwingableWeaponComponent16SetGlowIntensityEf
 * Demangled: Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *
 * Callers: 3
 *   0x00000000002C4E2C  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000002C4F40  Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED28 string=0x00000000001FED2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::SetGlowIntensity(Caver::SwingableWeaponComponent *this, float a2)
{
  return _ZN5Caver24SwingableWeaponComponent16SetGlowIntensityEf(this, a2);
}

