/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9820
 * Mangled: ._ZN5Caver20ConfigureOverlayView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x000000000033DE4C  Caver::ConfigureOverlayViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9828 string=0x00000000001F982C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ConfigureOverlayView::InitWithGameState()
{
  return _ZN5Caver20ConfigureOverlayView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE();
}

