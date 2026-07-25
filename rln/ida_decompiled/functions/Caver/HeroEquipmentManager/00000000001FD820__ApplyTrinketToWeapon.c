/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD820
 * Mangled: ._ZN5Caver20HeroEquipmentManager20ApplyTrinketToWeaponERKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS1_10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000003694AC  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD828 string=0x00000000001FD82C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEquipmentManager::ApplyTrinketToWeapon()
{
  return _ZN5Caver20HeroEquipmentManager20ApplyTrinketToWeaponERKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS1_10shared_ptrINS_4ItemEEE();
}

