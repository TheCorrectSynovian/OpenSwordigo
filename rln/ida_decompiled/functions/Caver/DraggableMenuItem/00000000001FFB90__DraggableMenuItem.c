/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB90
 * Mangled: ._ZN5Caver17DraggableMenuItemC2Ev
 * Demangled: Caver::DraggableMenuItem::DraggableMenuItem(void)
 *
 * Callers: 1
 *   0x000000000040E4D0  Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x0000000000400394  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB98 string=0x00000000001FFB9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DraggableMenuItem::DraggableMenuItem(Caver::DraggableMenuItem *this)
{
  JUMPOUT(0x4004B4);
}

