/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBCE0
 * Mangled: ._ZN5Caver15GameOverlayView9SetLayoutERKN5boost10shared_ptrINS_13GUIViewLayoutEEE
 * Demangled: Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 4
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003C8610  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBCE8 string=0x00000000001FBCEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameOverlayView::SetLayout()
{
  return _ZN5Caver15GameOverlayView9SetLayoutERKN5boost10shared_ptrINS_13GUIViewLayoutEEE();
}

