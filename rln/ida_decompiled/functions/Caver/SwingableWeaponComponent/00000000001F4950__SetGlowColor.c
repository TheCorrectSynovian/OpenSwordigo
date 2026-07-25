/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4950
 * Mangled: ._ZN5Caver24SwingableWeaponComponent12SetGlowColorENS_10FloatColorE
 * Demangled: Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *
 * Callers: 3
 *   0x00000000002C4E2C  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000002C5124  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4958 string=0x00000000001F495C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SwingableWeaponComponent::SetGlowColor()
{
  return _ZN5Caver24SwingableWeaponComponent12SetGlowColorENS_10FloatColorE();
}

