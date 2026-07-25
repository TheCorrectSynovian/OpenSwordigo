/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E20
 * Mangled: ._ZN5Caver20HeroEquipmentManager17ModelNameForArmorERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 3
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x000000000036924C  Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E28 string=0x00000000001F8E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEquipmentManager::ModelNameForArmor()
{
  return _ZN5Caver20HeroEquipmentManager17ModelNameForArmorERKN5boost10shared_ptrINS_4ItemEEE();
}

