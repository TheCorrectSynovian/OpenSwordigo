/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203820
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15GameOverlayViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *
 * Callers: 2
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003508A0  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203828 string=0x000000000020382C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>()
{
  return _ZN5boost10shared_ptrIN5Caver15GameOverlayViewEEC2IS2_EEPT_();
}

