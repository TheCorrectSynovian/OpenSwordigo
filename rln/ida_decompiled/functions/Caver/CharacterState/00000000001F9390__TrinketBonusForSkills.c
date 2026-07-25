/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9390
 * Mangled: ._ZN5Caver14CharacterState21TrinketBonusForSkillsERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000041212C  Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Callees: 1
 *   0x00000000003AE518  Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9398 string=0x00000000001F939C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::TrinketBonusForSkills()
{
  return _ZN5Caver14CharacterState21TrinketBonusForSkillsERKN5boost10shared_ptrINS_4ItemEEE();
}

