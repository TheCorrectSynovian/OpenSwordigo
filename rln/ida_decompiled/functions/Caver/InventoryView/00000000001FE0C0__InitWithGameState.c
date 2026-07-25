/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE0C0
 * Mangled: ._ZN5Caver13InventoryView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::InventoryView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE0C8 string=0x00000000001FE0CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::InventoryView::InitWithGameState()
{
  JUMPOUT(0x40F050);
}

