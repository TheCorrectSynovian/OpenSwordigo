/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202710
 * Mangled: ._ZN5Caver12MenuItemSlot7SetItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 4
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000040DC14  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Callees: 1
 *   0x0000000000429CC0  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202718 string=0x000000000020271C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MenuItemSlot::SetItem()
{
  return _ZN5Caver12MenuItemSlot7SetItemERKN5boost10shared_ptrINS_4ItemEEE();
}

