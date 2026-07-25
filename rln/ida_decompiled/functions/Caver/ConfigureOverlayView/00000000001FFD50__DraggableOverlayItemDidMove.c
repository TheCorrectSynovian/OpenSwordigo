/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD50
 * Mangled: ._ZN5Caver20ConfigureOverlayView27DraggableOverlayItemDidMoveEPNS_20DraggableOverlayItemE
 * Demangled: Caver::ConfigureOverlayView::DraggableOverlayItemDidMove(Caver::DraggableOverlayItem *)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD58 string=0x00000000001FFD5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ConfigureOverlayView::DraggableOverlayItemDidMove(
        Caver::ConfigureOverlayView *this,
        Caver::DraggableOverlayItem *a2)
{
  JUMPOUT(0x3C8154);
}

