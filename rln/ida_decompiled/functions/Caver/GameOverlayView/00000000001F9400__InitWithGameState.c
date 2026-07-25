/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9400
 * Mangled: ._ZN5Caver15GameOverlayView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 2
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9408 string=0x00000000001F940C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameOverlayView::InitWithGameState()
{
  return _ZN5Caver15GameOverlayView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE();
}

