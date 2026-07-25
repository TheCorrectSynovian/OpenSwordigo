/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B60
 * Mangled: ._ZN5Caver18ConsumableItemView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::ConsumableItemView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B68 string=0x00000000001F6B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ConsumableItemView::InitWithGameState()
{
  JUMPOUT(0x3C9EB4);
}

