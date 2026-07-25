/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002010E0
 * Mangled: ._ZN5Caver20HeroEquipmentManager10EquipArmorERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034A8E4  Caver::GameSceneController::UnequipArmor(void)
 *
 * Callees: 1
 *   0x00000000003694AC  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002010E8 string=0x00000000002010EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEquipmentManager::EquipArmor()
{
  return _ZN5Caver20HeroEquipmentManager10EquipArmorERKN5boost10shared_ptrINS_4ItemEEE();
}

