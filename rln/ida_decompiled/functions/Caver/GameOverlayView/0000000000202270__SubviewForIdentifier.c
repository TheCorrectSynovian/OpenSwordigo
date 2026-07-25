/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202270
 * Mangled: ._ZN5Caver15GameOverlayView20SubviewForIdentifierERKSs
 * Demangled: Caver::GameOverlayView::SubviewForIdentifier(std::string const&)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202278 string=0x000000000020227C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOverlayView::SubviewForIdentifier()
{
  JUMPOUT(0x3D7470);
}

