/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C80
 * Mangled: ._ZN5Caver12MenuItemSlot8SetSkillERKN5boost10shared_ptrINS_5SkillEEEb
 * Demangled: Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *
 * Callers: 3
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000041A708  Caver::ItemInfoView::SetSkill(boost::shared_ptr<Caver::Skill> const&)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C88 string=0x00000000001F9C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MenuItemSlot::SetSkill()
{
  return _ZN5Caver12MenuItemSlot8SetSkillERKN5boost10shared_ptrINS_5SkillEEEb();
}

