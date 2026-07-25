/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6AD0
 * Mangled: ._ZN5Caver20HeroEquipmentManager11EquipWeaponERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6AD8 string=0x00000000001F6ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEquipmentManager::EquipWeapon()
{
  return _ZN5Caver20HeroEquipmentManager11EquipWeaponERKN5boost10shared_ptrINS_4ItemEEE();
}

