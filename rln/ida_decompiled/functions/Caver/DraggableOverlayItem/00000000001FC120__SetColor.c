/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC120
 * Mangled: ._ZN5Caver20DraggableOverlayItem8SetColorENS_5ColorE
 * Demangled: Caver::DraggableOverlayItem::SetColor(Caver::Color)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003CD43C  Caver::DraggableOverlayItem::SetColor(Caver::Color)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC128 string=0x00000000001FC12C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::DraggableOverlayItem::SetColor()
{
  return _ZN5Caver20DraggableOverlayItem8SetColorENS_5ColorE();
}

