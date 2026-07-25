/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE030
 * Mangled: ._ZN5Caver20HeroEquipmentManager17ApplyArmorTrinketERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 4
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034A8E4  Caver::GameSceneController::UnequipArmor(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE038 string=0x00000000001FE03C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEquipmentManager::ApplyArmorTrinket()
{
  return _ZN5Caver20HeroEquipmentManager17ApplyArmorTrinketERKN5boost10shared_ptrINS_4ItemEEE();
}

