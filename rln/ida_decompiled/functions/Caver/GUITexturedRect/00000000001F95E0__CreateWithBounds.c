/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F95E0
 * Mangled: ._ZN5Caver15GUITexturedRect16CreateWithBoundsERKNS_9RectangleEb
 * Demangled: Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *
 * Callers: 7
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040DF30  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x0000000000429CC0  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x000000000049722C  Caver::GUIFrameView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x00000000004AB244  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F95E4 string=0x00000000004AB244 " "
 *   insn=0x00000000001F95E8 string=0x00000000001F95EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITexturedRect::CreateWithBounds(
        Caver::GUITexturedRect *this,
        const Caver::Rectangle *a2,
        bool a3)
{
  return _ZN5Caver15GUITexturedRect16CreateWithBoundsERKNS_9RectangleEb(this, a2, a3);
}

