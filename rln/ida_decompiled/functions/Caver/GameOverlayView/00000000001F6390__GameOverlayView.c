/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6390
 * Mangled: ._ZN5Caver15GameOverlayViewC2Ev
 * Demangled: Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callers: 2
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6398 string=0x00000000001F639C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::GameOverlayView(Caver::GameOverlayView *this)
{
  return _ZN5Caver15GameOverlayViewC2Ev(this);
}

