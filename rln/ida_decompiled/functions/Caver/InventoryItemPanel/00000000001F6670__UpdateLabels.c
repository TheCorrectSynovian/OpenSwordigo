/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6670
 * Mangled: ._ZN5Caver18InventoryItemPanel12UpdateLabelsEv
 * Demangled: Caver::InventoryItemPanel::UpdateLabels(void)
 *
 * Callers: 3
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000040B614  Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *
 * Callees: 1
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6678 string=0x00000000001F667C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryItemPanel::UpdateLabels(Caver::InventoryItemPanel *this)
{
  return _ZN5Caver18InventoryItemPanel12UpdateLabelsEv(this);
}

