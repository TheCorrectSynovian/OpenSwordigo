/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB900
 * Mangled: ._ZN5Caver10PortalView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEEb
 * Demangled: Caver::PortalView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *
 * Callers: 1
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB908 string=0x00000000001FB90C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::PortalView::InitWithGameState()
{
  JUMPOUT(0x42EC10);
}

