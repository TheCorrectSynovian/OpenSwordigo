/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8450
 * Mangled: ._ZN5boost10shared_ptrIN5Caver17DraggableMenuItemEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *
 * Callers: 1
 *   0x000000000040E4D0  Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000040E7E0  boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8458 string=0x00000000001F845C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>()
{
  return _ZN5boost10shared_ptrIN5Caver17DraggableMenuItemEEC2IS2_EEPT_();
}

