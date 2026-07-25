/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E70
 * Mangled: ._ZN5Caver20ConfigureOverlayView10LayoutItemEPNS_20DraggableOverlayItemE
 * Demangled: Caver::ConfigureOverlayView::LayoutItem(Caver::DraggableOverlayItem *)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E78 string=0x00000000001F3E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ConfigureOverlayView::LayoutItem()
{
  JUMPOUT(0x3C79A4);
}

