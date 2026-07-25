/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5660
 * Mangled: ._ZN5Caver12MenuItemSlot4InitEf
 * Demangled: Caver::MenuItemSlot::Init(float)
 *
 * Callers: 5
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040D64C  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5668 string=0x00000000001F566C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MenuItemSlot::Init(Caver::MenuItemSlot *this, float a2)
{
  JUMPOUT(0x429844);
}

