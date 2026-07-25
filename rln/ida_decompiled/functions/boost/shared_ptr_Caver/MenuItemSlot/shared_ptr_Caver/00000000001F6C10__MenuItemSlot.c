/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C10
 * Mangled: ._ZN5boost10shared_ptrIN5Caver12MenuItemSlotEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>(Caver::MenuItemSlot *)
 *
 * Callers: 5
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040D64C  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6C18 string=0x00000000001F6C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>()
{
  JUMPOUT(0x3FDD54);
}

