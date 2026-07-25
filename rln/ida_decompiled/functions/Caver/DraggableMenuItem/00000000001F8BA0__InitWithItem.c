/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8BA0
 * Mangled: ._ZN5Caver17DraggableMenuItem12InitWithItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000040E4D0  Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8BA8 string=0x00000000001F8BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::DraggableMenuItem::InitWithItem()
{
  return _ZN5Caver17DraggableMenuItem12InitWithItemERKN5boost10shared_ptrINS_4ItemEEE();
}

