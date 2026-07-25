/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD370
 * Mangled: ._ZN5boost10shared_ptrIN5Caver20DraggableOverlayItemEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::DraggableOverlayItem>::shared_ptr<Caver::DraggableOverlayItem>(Caver::DraggableOverlayItem *)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD378 string=0x00000000001FD37C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::DraggableOverlayItem>::shared_ptr<Caver::DraggableOverlayItem>()
{
  JUMPOUT(0x3C7654);
}

