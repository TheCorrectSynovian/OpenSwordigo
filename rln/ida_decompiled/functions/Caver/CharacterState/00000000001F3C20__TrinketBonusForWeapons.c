/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C20
 * Mangled: ._ZN5Caver14CharacterState22TrinketBonusForWeaponsERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000041212C  Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Callees: 1
 *   0x00000000003ADE70  Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C28 string=0x00000000001F3C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::TrinketBonusForWeapons()
{
  return _ZN5Caver14CharacterState22TrinketBonusForWeaponsERKN5boost10shared_ptrINS_4ItemEEE();
}

