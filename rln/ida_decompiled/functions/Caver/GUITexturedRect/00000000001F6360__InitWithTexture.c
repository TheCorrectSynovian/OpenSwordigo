/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6360
 * Mangled: ._ZN5Caver15GUITexturedRect15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleEb
 * Demangled: Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *
 * Callers: 7
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040DF30  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x0000000000429CC0  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x0000000000497274  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Callees: 1
 *   0x00000000004AB048  Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6368 string=0x00000000001F636C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUITexturedRect::InitWithTexture()
{
  JUMPOUT(0x4AB11C);
}

